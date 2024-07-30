// C++ code
//
#include <IRremote.h>

int ir_sencer = 0;

// Map the IR code to the corresponding remote button.
// The buttons are in this order on the remote:
//    0   1   2
//    4   5   6
//    8   9  10
//   12  13  14
//   16  17  18
//   20  21  22
//   24  25  26
//
// Return -1, if supplied code does not map to a key.
int mapCodeToButton(unsigned long code) {
  // For the remote used in the Tinkercad simulator,
  // the buttons are encoded such that the hex code
  // received is of the format: 0xiivvBF00
  // Where the vv is the button value, and ii is
  // the bit-inverse of vv.
  // For example, the power button is 0xFF00BF000

  // Check for codes from this specific remote
  if ((code & 0x0000FFFF) == 0x0000BF00) {
    // No longer need the lower 16 bits. Shift the code by 16
    // to make the rest easier.
    code >>= 16;
    // Check that the value and inverse bytes are complementary.
    if (((code >> 8) ^ (code & 0x00FF)) == 0x00FF) {
      return code & 0xFF;
    }
  }
  return -1;
}

int readInfrared() {
  int result = -1;
  // Check if we've received a new code
  if (IrReceiver.decode()) {
    // Get the infrared code
    unsigned long code = IrReceiver.decodedIRData.decodedRawData;
    // Map it to a specific button on the remote
    result = mapCodeToButton(code);
    // Enable receiving of the next value
    IrReceiver.resume();
  }
  return result;
}

void setup()
{
  IrReceiver.begin(7);

  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  ir_sencer = readInfrared();
  Serial.println(ir_sencer);
  if (ir_sencer == 16) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  }
  if (ir_sencer == 17) {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    if (ir_sencer == 0) {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}