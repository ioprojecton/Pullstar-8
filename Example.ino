#include <Wire.h>
//#include "PCA9685.h"
#define mcp_ic_address 0
#define ON 1
#define OFF 0
//#define wait_time 4

bool mcp_ic_initialize(unsigned char);
bool mcp_ic_port(unsigned char address, unsigned char port, bool value);

PCA9685 pwmController(Wire, PCA9685_PhaseBalancer_Weaved);

PCA9685_ServoEvaluator pwmServo1(150, 324, 500);

void setup() {
  while (!mcp_ic_initialize(mcp_ic_address));
  pwmController.init(B000000);
  pwmController.setPWMFrequency(50);


}

void loop() {

  mcp_ic_port(mcp_ic_address, 1, ON);

  pwmController.setChannelPWM(0, pwmServo1.pwmForAngle(90));

  pwmController.setChannelPWM(0, pwmServo1.pwmForAngle(0));

  pwmController.setChannelPWM(0, pwmServo1.pwmForAngle(-90));

  mcp_ic_port(mcp_ic_address, 0, OFF);

}

bool mcp_ic_initialize(unsigned char _address) {
#define IODIR 0x00
#define IOCON 0x05
#define mcp_address 0x20


  if (mcp_address + _address > 0x2F) return 0;

  Wire.begin();
  //Wire.setClock(400000);
  Wire.beginTransmission(mcp_address + _address);
  Wire.write(IODIR);
  Wire.write(0x00);
  Wire.endTransmission();

  Wire.beginTransmission(mcp_address + _address);
  Wire.write(IOCON);
  Wire.write(0x020);
  Wire.endTransmission();

  return 1;
}

bool mcp_ic_port(unsigned char address, unsigned char port, bool value) {
#define OLAT 0x0A
#ifndef mcp_address
#define mcp_address 0x20
#endif

  if ((mcp_address + address > 0x2F) || (port > 7)) return 0;

  Wire.beginTransmission(mcp_address + address);

  Wire.write(OLAT);

  static unsigned char gpio;

  if (value) gpio |= (value << port);

  if (!value) gpio ^= (!value << port);

  Wire.write(gpio);
  Wire.endTransmission();


  return 1;
}
