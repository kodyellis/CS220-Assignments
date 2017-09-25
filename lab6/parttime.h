#ifndef CLASS_PARTTIME
#define CLASS_PARTTIME
#include "employee.h"

class Parttime : public Employee
{
   protected:
      float hourly_wage;
      int hours_worked;

   public:
      Parttime();
      Parttime(char *, int, float, int);
      Parttime(const Parttime &);
      ~Parttime();

      float getHourlyWage();
      void setHourlyWage(float);
      int getHoursWorked();
      void setHoursWorked(int);
      double getPay();
      void display();
}; // class PartTime

#endif
