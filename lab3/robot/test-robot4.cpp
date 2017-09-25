/*
   file name -- test-robot4.cpp

   This program serves as the test drver for the Robot class.
   It declares an array of Robot objects.
*/

// ====================== header files ======================
#include <iostream>                 // for console I/O
using namespace std;                // for standard library
#include "robot.h"

// ==================== function prototypes =================
void displayRobot(Robot);

int main()
{
   Robot one[5];
   //Robot two[10](30, true, 5);
   //Robot first(30, true, 5)[5];

   displayRobot(one);
   //displayRobot(one[0]);

/*
   cout << "Press power button on robot one"
        << endl;
   one[0].pressPowerOn();
   displayRobot(one[0]);
*/

   return 0;
} // end main


void displayRobot(Robot me)
{
   cout << "Status: "
        << me.isOn()
        << endl
        << "Current angle: "
        << me.getAngle()
        << endl
        << "Current position: "
        << me.getPosition()
        << endl;
} // end displayRobot
