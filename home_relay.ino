#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "ra-qm_wTqBPUJ45DIWbcSI62g9bEHy1E"; // Enter your Auth Token 
char ssid[] = "POCO X2"; // Enter your WIFI name
char pass[] = "dheepan0431";

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(D0, param.asInt()); // Relay 1
}
BLYNK_WRITE(V1) {
  digitalWrite(D1, param.asInt()); // Relay 2
}
BLYNK_WRITE(V2) {
  digitalWrite(D2, param.asInt()); // Relay 3
}
BLYNK_WRITE(V3) {
  digitalWrite(D3, param.asInt()); // Relay 4
}

void setup() {
  //Set the Relay pins as an output
  pinMode(D0, OUTPUT); // Relay 1
  pinMode(D1, OUTPUT); // Relay 2
  pinMode(D2, OUTPUT); // Relay 3
  pinMode(D3, OUTPUT); // Relay 4
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}
