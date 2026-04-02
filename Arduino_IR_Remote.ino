#include <IRremote.h>

const int IR_PIN =4 ;

IRsend irsend;

void setup() {
  Serial.begin(9600);
  irsend.begin(IR_PIN);
  Serial.println("IR Initialised");
}

void loop() {
  if(Serial.available()){
  String a= Serial.readStringUntil('\n');
  a.trim();


  if(a=="on" || a=="off"){

  Serial.println("POWER");
  irsend.sendNEC(0x20DC0AF5, 32);
  delay(300);
  }

 else if (a=="led"){
  Serial.println("LED");
  irsend.sendNEC(0x20DCBA45, 32);
  delay(300);
 }


  else if (a=="1"){

  Serial.println("1");
  irsend.sendNEC(0x20DCCA35, 32);
  delay(300);
  }

  else if (a=="2"){
  Serial.println("2");
  irsend.sendNEC(0x20DC2AD5, 32);
  delay(300);
  }

  else if(a=="3"){
  Serial.println("3");
  irsend.sendNEC(0x20DCAA55, 32);
  delay(300);
  }
  
  else if(a=="4"){
  Serial.println("4");
  irsend.sendNEC(0x20DC6A95, 32);
  delay(300);
  }

  else if(a=="5"){
  Serial.println("5");
  irsend.sendNEC(0x20DC1AE5, 32);
  delay(300);
  }
  }
}
