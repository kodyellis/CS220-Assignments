
#ifndef CLASS_FULLTIME
#define CLASS_FULLTIME
#include "employee.h"

class Fulltime : public Employee
{
   protected:
      float monthly_salary;

   public:
      Fulltime();
      Fulltime(char*, int, float);
      Fulltime(const Fulltime &);
      ~Fulltime();

      float getMonthlySalary();
      void setMonthlySalary(float);
      double getPay();
      void display();
}; // class FullTime

#endif
