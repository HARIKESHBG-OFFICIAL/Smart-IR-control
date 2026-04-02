#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <WiFi.h>
#include <ESPUI.h>

int ir_pin =4 ;
const char* ssid="SSID"; #Enter your ssid
const char* password="password"; # Enter your password

IRsend irsend(ir_pin);

void power(Control *sender, int type) {
  if (type == B_UP) {
    Serial.println("POWER");
    irsend.sendNEC(0x20DC0AF5, 32);
} 
}

void one(Control *sender, int type) {
  if (type == B_UP) {
    Serial.println("one");
    irsend.sendNEC(0x20DCCA35, 32);
} 
}

void two(Control *sender, int type) {
  if (type == B_UP) {
    Serial.println("two");
    irsend.sendNEC(0x20DC2AD5, 32);
} 
}

void three(Control *sender, int type) {
  if (type == B_UP) {
    Serial.println("three");
    irsend.sendNEC(0x20DCAA55, 32);
} 
}

void four(Control *sender, int type) {
  if (type == B_UP) {
    Serial.println("four");
    irsend.sendNEC(0x20DC6A95, 32);
} 
}

void five(Control *sender, int type) {
  if (type == B_UP) {
    Serial.println("five");
    irsend.sendNEC(0x20DC1AE5, 32);
} 
}


void led(Control *sender, int type) {
  if (type == B_UP) {
    Serial.println("LED");
    irsend.sendNEC(0x20DCBA45, 32);
} 
}

void setup() {
  Serial.begin(115200);
  irsend.begin();
  WiFi.begin(ssid,password);
  delay(1000);
  while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.println("WIFI NOT CONNECTED");
}
  Serial.println(WiFi.localIP());

  ESPUI.begin("SMART IR CONTROLLER");
  delay(100);

  ESPUI.button("POWER", power, ControlColor::Alizarin, "");
  ESPUI.button("Speed:1", one, ControlColor::Peterriver, "");
  ESPUI.button("Speed:2", two, ControlColor::Peterriver, "");
  ESPUI.button("Speed:3", three, ControlColor::Peterriver, "");
  ESPUI.button("Speed:4", four, ControlColor::Peterriver, "");
  ESPUI.button("Speed:5", five, ControlColor::Peterriver, "");
  ESPUI.button("LED", led, ControlColor::Sunflower, "");
}

void loop() {
 



}
