// CODE FOR POLULU ESP: REC FROM MIDDLE MAN / UART SEND TO POLULU
#include <HardwareSerial.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include <esp_now.h>
#include <string.h>

// THOMAS ESP-WROOM-32 MAC ADDRESS 
uint8_t espMac[] = {0x40, 0x22, 0xD8, 0x5F, 0xA9, 0xF0};
// SOHUM ESP32-PICO-MINI MAC ADDRESS
uint8_t broadcastAddress[] = {0xE8, 0x9F, 0x6D, 0x2F, 0xB2, 0xC4};

// Serial Channel for Polulu
HardwareSerial PolSerial(0);

// Message template across ESPS
typedef struct commands {
  char rob1Cmd[20];
  char rob2Cmd[20];
  uint count;
} commands;

// FAKE COMPCMDS: to test middle man
commands compCmds;
// FAKE COMPCMDS: to test middle man

// Cmds from middle man
commands rcvCmds;
uint count = 0; // Dummy value 

// UART setup
uint txPin = 1;
uint rxPin = 3;

// FAKE COMPSND callback: to test middle man
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.print("\r\nLast Packet Send Status:\t");
  if (status == 0){
    Serial.println( "Delivery Success");
  }
  else{
    Serial.println("Delivery Fail");
  }
}
// FAKE COMPSND callback: to test middle man

// ESP REC CALLBACK, forwards command from comp to Polulu's UART Channel
void OnDataRecv(const uint8_t *mac, const uint8_t *incomingData, int len) {
  memcpy(&rcvCmds, incomingData, sizeof(rcvCmds));
  PolSerial.println("IN POLULU SERIAL");
  PolSerial.println(rcvCmds.rob1Cmd);
}

esp_now_peer_info_t peerInfo;

void setup() {
  // Serial/UART Setup
  Serial.begin(115200); 
  PolSerial.begin(115200, SERIAL_8N1, 3, 1);

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
  // FAKE CMD MESS TO MIDDLE
  strcpy(compCmds.rob1Cmd,"for");
  strcpy(compCmds.rob2Cmd, "sto");
  compCmds.count = count;
  // FAKE CMD MESS TO MIDDLE

  //SENDING PROTOCAL
  esp_err_t result = esp_now_send(broadcastAddress, (uint8_t *) &compCmds, sizeof(compCmds)); 
  if (result == ESP_OK) {
    Serial.println("Message sent successfully");
    count++;
  } else {
    Serial.println("Error sending message");
  }
  delay(4500);
  //SENDING PROTOCAL
}
