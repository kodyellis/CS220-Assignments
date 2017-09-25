/*
   file name -- robot.cpp

   This file contains the function definitions of the Robot class.
*/

// ========================== header files =============================
#include <iostream>                       // for console input
using namespace std;                      // for standard library
#include "robot.h"                        // for Robot class


Robot::Robot(int initial_angle,
             bool initial_status,
             int initial_position)
{
   current_angle = initial_angle;
   status = initial_status;
   position = initial_position;
   cout << "Constructor is called"
        << endl;
} // end of constructor

// preconditions:  none
// postconditions: returns the value of is_on
bool Robot::isOn()
{
   return status;
} // end isOn


// precondition: none
// postconditions: the robot is turned on if it is off; otherwise, it is turned off.
void Robot::pressPowerOn()
{
   if (status)
      status = false;
   else
      status = true;
} // end pressPowerOn


// preconditions:  none
// postconditions: returns the current angle
int Robot::getAngle()
{
   return current_angle;
} // end of getAngle


// preconditions:  none
// postconditions: returns the current position
int Robot::getPosition()
{
   return position;
} // end of getPosition


/*
// preconditions: n is a positive value
// postconditions: the robot moves forward n steps if robot is on and
//                 position is increment by n steps; otherwise, the
//                 robot does not move
void moveForward(int n);


// preconditions: n is a positive value
// postconditions: the robot moves backward n steps if robot is on
//                 and position is decremented by n steps; otherwise,
//                 the robot does not move
void moveBackward(int n);


// precondition: turned_angle is a positive value
// postconditions: the turned-angle is added to current angle if robot is on;
//                if the resulting angle exceeds 360 degrees, it is translated
//                to between 0 and 360 degrees inclusive. If the robot is off,
//                the robot does not turn.
void turnClockwise(int turned_angle);



// precondition: turned_angle is a positive value
// postconditions: the turned-angle is subtracted from current angle if robot
//                is on; if the resulting angle becomes negative, it is translated
//                to between 0 and 360 degrees inclusive. If the robot is off,
//                the robot does not turn.
void turnCounterclockwise(int turned_angle);

*/