#ifndef CLASS_MANAGER
#define CLASS_MANAGER
#include "fulltime.h"

class Manager : public Fulltime
{
   protected:
      float monthly_bonus;

   public:
      Manager();
      Manager(char *, int, float, float );
      Manager(const Manager &);
      ~Manager();

      float getMonthlyBonus();
      void setMonthlyBonus(float);
      double getPay();
      void display();
}; // class Manager

#endif
