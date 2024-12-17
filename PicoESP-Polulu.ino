// SECOND ESP-POLULU
// CODE FOR POLULU ESP: REC FROM MIDDLE MAN / UART SEND TO POLULU
#include <HardwareSerial.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include <esp_now.h>
#include <ESP32Servo.h>
#include <string.h>
#include "esp_log.h"


// GARRETT ESP32-PICO-MINI MAC ADDRESS
uint8_t espMac[] = {0xE8, 0x9F, 0x6D, 0x24, 0x87, 0x5C};
// SOHUM ESP32-PICO-MINI MAC ADDRESS
uint8_t broadcastAddress[] = {0xE8, 0x9F, 0x6D, 0x2F, 0xB2, 0xC4};

// Serial Channel for Polulu
HardwareSerial PolSerial(0);
// Servo ctrlr
Servo clwServoL;
Servo clwServoR;
int servoPinL = 33;
int servoPinR = 27;

// Message template across ESPS
typedef struct commands {
  char rob1Cmd[50];
  char rob2Cmd[50];
} commands;

// Cmds from middle man
commands rcvCmds;

// UART setup
int txPin = 8;
int rxPin = 7;

// FAKE COMPSND callback: to test middle man
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.print("\r\nLast Packet Send Status:\t");
}
// FAKE COMPSND callback: to test middle man

// ESP REC CALLBACK, forwards command from comp to Polulu's UART Channel
void OnDataRecv(const uint8_t *mac, const uint8_t *incomingData, int len) {
  memcpy(&rcvCmds, incomingData, sizeof(commands));
  if (strcmp(rcvCmds.rob2Cmd, "ope") == 0) {
    PolSerial.println(rcvCmds.rob2Cmd);
    clwServoL.write(90);
    clwServoR.write(0);
  } else if (strcmp(rcvCmds.rob2Cmd, "clo") == 0){
    PolSerial.println(rcvCmds.rob2Cmd);
    clwServoL.write(45);
    clwServoR.write(45);
  } else {
    PolSerial.println(rcvCmds.rob2Cmd);
  }
}

esp_now_peer_info_t peerInfo;

void setup() {
  // Serial/UART Setup
  Serial.begin(115200); 
  PolSerial.begin(115200, SERIAL_8N1, rxPin, txPin);

  // Turn on LED for debug
  clwServoL.attach(servoPinL);
  clwServoL.write(0);
  clwServoR.attach(servoPinR);
  clwServoR.write(90);

  // Connecting to Middle Man
  WiFi.mode(WIFI_STA); 
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    while (true);
  }
  memcpy(peerInfo.peer_addr, broadcastAddress, 6);
  peerInfo.channel = 0;  
  peerInfo.encrypt = false;
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    Serial.println("Failed to add peer");
    return;
  }
  esp_now_register_recv_cb(esp_now_recv_cb_t(OnDataRecv));
}

// don't really need for polulu
void loop() {
}
