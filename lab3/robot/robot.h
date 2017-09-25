// file name -- robot.h

// This file contains the definition of the Robot class.


#ifndef ROBOT_CLASS_
#define ROBOT_CLASS_

class Robot
{
   private:
      bool status;          // robot is either on or off
      int current_angle;    // current angle of the robot
      int position;         // position of the robot

   public:
      // preconditions: none
      // postconditions: initial_angle becomes the current angle, iniital
      //                status becomes the status of the robot (either on
      //                or off), and initial position set to position
      Robot(int initial_angle = 0,
            bool initial_status = false,
            int initial_position = 0);

      // preconditions:  none
      // postconditions: returns the value of is_on
      bool isOn();

      // precondition: none
      // postconditions: the robot is turned on if it is off; otherwise, it is turned
      //                off.
      void pressPowerOn();

      // preconditions:  none
      // postconditions: returns the current angle of the Robot
      int getAngle();

      // preconditions:  none
      // postconditions: returns the current position of the Robot
      int getPosition();

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

};   // end class Robot

#endif