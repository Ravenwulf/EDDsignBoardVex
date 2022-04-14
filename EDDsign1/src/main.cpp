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
  Motor2.spinFor((directionType) fwd, (double) 1.0, (timeUnits) sec);
  Controller1.rumble(".");
}

void oneventbuttonY() {
  Motor2.spinFor((directionType) rev, (double) 1.0, (timeUnits) sec);
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
  for(int i = 0; i < 20; i++) {
    Brain.Screen.print("All Hail Marcello!All Hail Marcello!All Hail Marcello!All Hail Marcello!");
    Brain.Screen.newLine();
    wait(20, msec);
  }

    int randX = 0;
    int randY = 0;
    int randRed = 0;
    int randBlue = 0;
    int randGreen = 0;
    color c;
   
    srand( Brain.Timer.systemHighResolution() );
    while(1) {
        randX = rand() % 400;
        randY = rand() % 200;

        randRed = rand() % 255;
        randGreen = rand() % 255;
        randBlue = rand() % 200;

        c.rgb((uint8_t) randRed, (uint8_t) randGreen, (uint8_t) randBlue);

        Brain.Screen.print(randY);

        Brain.Screen.drawCircle(randX + 20, randY + 10, 40, c);

        Brain.Screen.drawCircle(randX, randY, 10, blue);

        Brain.Screen.drawCircle(randX + 40, randY, 10, blue);

        Brain.Screen.drawRectangle(randX, randY + 20, 40, 10, red);
        this_thread::sleep_for(100);
    }

}
