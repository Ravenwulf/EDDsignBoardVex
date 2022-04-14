/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\DS Marcello                                      */
/*    Created:      Thu Apr 07 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor2               motor         2               
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

void oneventbuttonX() {
  Motor2.spinFor((directionType) rev, (double) 1.0, (timeUnits) sec);
  Controller1.rumble(".");
}

void oneventbuttonY() {
  Motor2.spinFor((directionType) fwd, (double) 1.0, (timeUnits) sec);
  Controller1.rumble(".");
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  Controller1.ButtonX.pressed(oneventbuttonX);
  Controller1.ButtonY.pressed(oneventbuttonY);
  Motor2.setStopping(hold);
  vexcodeInit();
  Controller1.Screen.clearScreen();
  Controller1.Screen.print("All Hail Marcello");
}
