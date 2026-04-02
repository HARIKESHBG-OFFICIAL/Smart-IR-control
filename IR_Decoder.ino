#include <IRrecv.h>
#include <IRutils.h>

const int RECV_PIN = 32;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(115200);
  irrecv.enableIRIn();
  Serial.println("IR Receiver Initialised");
}

void loop() {
  if (irrecv.decode(&results)) {

    Serial.print("HEX: ");
    Serial.println(resultToHexidecimal(&results));
    Serial.println(resultToSourceCode(&results));

    Serial.print("Protocol: ");
    Serial.println(typeToString(results.decode_type));

    Serial.print("Bits: ");
    Serial.println(results.bits);

    irrecv.resume();
  }
}
