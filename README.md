# Pullstar-8
I2C 8 Port Servo Driver

The I2C servo driver board by Surepic© is designed to make connecting motors, sensors and other components to your Arduino,Rasberi Pi-based project as fast and easy as possible.

This board allows your Raspberry Pi,Arduino, etc., to control up to 8 servo motors in a simple way via an I2C connection. Thanks to its I2C capabilities, this board saves the Raspberry Pi's,Arduino`s GPIO pins, allowing you to use them for other purposes.

Each of this board's 8 servo motor GPIO pin headers has been spaced out to the standard 3-pin servo pinout (ground, 5V, signal) to make it easier to attach your servo motors and can supply up to 1.25A to each of 8 outputs.

This driver includes headers to connect to a Raspberry Pi,Arduino , so there is no need for soldering to make it up and running.

Using the onboard jumpers for power selection, the input power can be supplied via Arduino's,Rasberi Pi`s regulated voltage, or a completely separate power supply attached to the board's 2.1mm barrel jack. This feature makes this board ideal if you are connecting multiple servos!

Compared to other servo drivers this board offers:
  Independant power control(ON/OFF) to each outputs via i2c.
  Independant duty cycle control to each outputs via i2c.
  Adjustible frequency to up to 1.6khz.
  1.5A per output when powered from external supply.
  LEDs on each output providing feedback if output is ON or OFF.
  2 selectible power sources selectible with jumpers and with led status indicators.
  Onboard voltage regulator (input 6-7v 3A recommended), when barrel jack is used.
  Open collector outputs on power pins.
  I2C addressess are selectable with jumpers for both onboard ics.
  Fully compatible with fast mode I2C 400kbits/s.
  Each board is fully tested before shipping.
 Compatible with Adafruit, Sparkfun libraries.
=========================

features:

•16 PWM channels, controllable over I2C
•2.1mm industry standard barrel jack port
•Contain an I2C-controlled PWM ic with a built-in clock
•12-bit resolution for each output - for servos(4us at 60hz)
•Controls up to 8 servos
.Dual power inputs (selectible with jumpers).
.Onboard low noise low ripple regulator.
.115 x 105mm size
.Feedback LEDs on each output
.Independant power control to each output
