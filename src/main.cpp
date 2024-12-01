#include <Arduino.h>

#include <AccelStepper.h>


#define  Mode 1 
#define PUL 13
#define DIR 12

AccelStepper stepper(Mode,PUL,DIR); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

void setup()
{  
  stepper.setMaxSpeed(1000);
  stepper.setAcceleration(1000);
  stepper.runToNewPosition(500);
}

void loop()
{    
  stepper.runToNewPosition(0);
}
