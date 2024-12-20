//CODE OF MIDDLE MAN ESP: REC FROM COMP / SEND TO ESP/POLULU
#include <WiFi.h>
#include <esp_wifi.h>
#include <esp_now.h>
#include <string.h>
#include <HardwareSerial.h>
#include "esp_log.h"

// SOHUM ESP32-PICO-MINI-02 
uint8_t espMac[] = {0xE8, 0x9F, 0x6D, 0x2F, 0xB2, 0xC4};

// EACH ESP32 MAC ADDRESS ON THE POLULUS
uint8_t macAddresses[][6] = {
    {0x40, 0x22, 0xD8, 0x5F, 0xA9, 0xF0}, // Thomas ESP32-WROOM MAC
    {0xE8, 0x9F, 0x6D, 0x24, 0x87, 0x5C}, // Garrett ESP32-PICO MAC
};


// Message template across ESPS
typedef struct commands {
  char rob1Cmd[50];
  char rob2Cmd[50];
} commands;

const int numPolulus = sizeof(macAddresses) / sizeof(macAddresses[0]);
// ADDING EACH ESP AS A PEER/ SETTING UP EACH COMMUNICATION TO POLULUS
void connect_to_esps() {
  for (int i = 0; i < numPolulus; i++) {
    // Init connect
    esp_now_peer_info_t peerInfo;
    memset(&peerInfo, 0, sizeof(peerInfo));
    memcpy(peerInfo.peer_addr, macAddresses[i], 6);
    peerInfo.channel = 0;  
    peerInfo.encrypt = false;
    // Trying connect
    if (esp_now_add_peer(&peerInfo) == ESP_OK) {
      Serial.println("added Peer");
    } else {
      Serial.println("Failed to add peer: ");
    }
  }
}
// ADDING EACH ESP AS A PEER/ SETTING UP EACH COMMUNICATION TO POLULUS

// Callback After Send: prolly mainly for debugging
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
}


commands espCMDS;
// Recv Callback FROM ESPNOW: GET COMPCMD -> SEND TO ESP
void OnDataRecv(const uint8_t *mac, const uint8_t *incomingData, int len) {
  Serial.println("MM: ESP SENT TO POLULU");
}

void setup(){
  Serial.begin(115200);
  // ESPNOW PROTOCOL SETUP
  WiFi.mode(WIFI_STA);
  WiFi.STA.begin();
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }
  connect_to_esps();
  esp_now_register_send_cb(OnDataSent);
  esp_now_register_recv_cb(esp_now_recv_cb_t(OnDataRecv));
}

bool handshake = false;
commands rcvCmds;

void loop(){
  //STOPS FEEDBACK CURRENT LOG STATE
  esp_log_level_set("*", ESP_LOG_ERROR);
  if (!handshake) {
    if (Serial.available()) {
      static char buf[20];
      int bytesRead = Serial.readBytes(buf, sizeof(buf) - 1);
      buf[bytesRead] = '\0';
      if (strcmp(buf, "connect") == 0) {
        Serial.println("ready");
        handshake = true;
      }
    }
  } else {
    if (Serial.available() > 0) {
      Serial.readBytes((char *)&rcvCmds, sizeof(commands));
      rcvCmds.rob1Cmd[49] = '\0';
      rcvCmds.rob2Cmd[49] = '\0';
      Serial.print("Told R1: ");
      Serial.println(rcvCmds.rob1Cmd);
      Serial.print("Told R2: ");
      Serial.println(rcvCmds.rob2Cmd);
      // FINAL -> For loop, send rob_Idx_Cmd to macAddress[Idx]
      for (int i = 0; i < numPolulus; i++) {
        esp_now_send(macAddresses[i], (uint8_t*) &rcvCmds, sizeof(rcvCmds));
      }
    }
  }
}
