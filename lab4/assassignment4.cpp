// Filename:  assassignment4.cpp
// Name: Kody Ellis
// Class: CSCI 210 Programming II
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:
// ==================== header files ==================================
#include <iostream>      //Input/Output
#include <cctype>        //to use toupper/tolower functions
#include <string>        //To use trings
#include <cstring>       //^
using namespace std;
// ======================== data type declarations ========================
struct Pizza
{
   char crust; // 'H' for hand-tossed, 'T' for thin, and 'K' for thick
   string toppings[8];
   int num_of_toppings;
   char size; // 'S' for small, 'M' for medium, and 'L' for large
   double cost;
}; // struct Pizza
// ======================== function prototypes ========================
void pizzaFunctions(Pizza *, Pizza*);
void getCrust(Pizza*);
void getToppings(Pizza*);
void getSize(Pizza*);
void computePizzaPrice(Pizza *);
void computeTax(Pizza *);
void display(Pizza*);
void anotherPizza(Pizza*);
void bubbleSort(Pizza* , Pizza*, int);
void deleteHeap(Pizza* , Pizza*);
// ======================== constant declarations ========================
const int MAIN_SIZE = 10;
const float TOPPING_PRICE = 1.5;
const float SMALL_PIZZA_PRICE = 9.5;
const float MEDIUM_PIZZA_PRICE = 11.25;
const float LARGE_PIZZA_PRICE = 12.5;
// ======================== data type declarations ========================
int pizza_index = 0;
char answer = 'Y';     //thsi is for if the user wants another pizza or not.
double tax = 0.00;
double added_up_costs = 0.00;     //added up costs from each pizza before tax
double pizza_topping_price = 0.00;   //contains the total cost of the toppings for a select pizza
double total = 0.00;  //total plus tax

// ======================== function definitions ========================

int main ()
{
   Pizza *order, *temp;
   order = new Pizza[MAIN_SIZE]; // creates 10 Pizza struct arrays
   temp = new Pizza[1];          //creates 2 pizza struct arrays

   pizzaFunctions(order, temp);

   return 0;
}

void pizzaFunctions(Pizza *order, Pizza* temp)
/*Precondition: N/A
*Postcondition: All of the main function for the program are executed.
*/
{
   while (answer == 'Y' && pizza_index < 10) // 10 pizzas max
   {
         cout << endl << "Pizza#"<< pizza_index+1 << ":  " <<endl;
         getCrust(order); //Enters pointer order as a parameter
         getToppings(order);
         getSize(order);
         computePizzaPrice(order);
         anotherPizza(order);  //pizza index updates here
   }

   if (pizza_index == 10)
   {
      cout << "Sorry you cannot have more than 10 pizzas";
      pizza_index = 9;  //makes sure pizza index doesnt go over 10 as it will overload
   }

   computeTax(order);
   bubbleSort(order,temp,MAIN_SIZE);
   display(order);
   deleteHeap(order,temp);

}

void getCrust(Pizza *order)
   /*Precondition: N/A
    *Postcondition: The crust variable for a select #pizza is given a value
    */
{
   do
   {
      cout << " Hello what pizza crust would you like? 'H' for hand-tossed,"
      << " 'T' for thin, and 'K' for thick?  ";
      cin >> order[pizza_index].crust;
      order[pizza_index].crust = toupper(order[pizza_index].crust); //makes sure whatever is inputed is going to be an upper case letter/

      if(order[pizza_index].crust == 'H' || order[pizza_index].crust == 'T' || order[pizza_index].crust == 'K')
         break; // If they inputted a correct option, loop breaks
      else
         cout << "Sorry what you entered is invalid, can you please try again?" << endl;
   }while(true);
}

void getToppings(Pizza *order)
   /*Precondition: N/A
    *Postcondition: The toppings variable for a select #pizza is given a value
    */
{
   char answer1 = 'Y'; //by default answer equals yes
   int index = 0;
   order[pizza_index].num_of_toppings = 0; //Makes sure number of toppings for a select pizza is 0 before calculations


   while (answer1 != 'N' && order[pizza_index].num_of_toppings <= 7)
   {


      cout << endl << "Which toppings would you like? Do you want Pepperoni, Beef, Mushrooms, GreenPeppers, Tomatoes, Olives, Pineapples, or Sausage? " << endl;
      cin >> order[pizza_index].toppings[index]; //8 total toppings, 8 elements,  but index goes from 0 to 7

      cout <<" Do you want another topping? 'Y' or 'N' ";
      cin >> answer1;

      order[pizza_index].num_of_toppings++;  //updates topping count

      answer1 = toupper(answer1);// turns whatever is stored in answer into an uppercase letter

      ++index;  // increments index for next iteration, to potentially store a different topping.
   }

   if(order[pizza_index].num_of_toppings >= 8)
   {
      cout << "Sorry you cant order any more toppings for the pizza" << endl;
   }


}

void getSize(Pizza *order)
   /*Precondition: N/A
    *Postcondition: The size variable for a select #pizza is given a value
    */
{
   do
   {
      cout << " Hello what pizza size would you like? 'S' for Small, "
      << "'M' for Medium, or 'L' for Large? ";
      cin >> order[pizza_index].size;
      order[pizza_index].size = toupper(order[pizza_index].size); //makes sure whatever is inputed is going to be an upper case letter/

      if(order[pizza_index].size == 'S' || order[pizza_index].size == 'M' || order[pizza_index].size == 'L')
         break; // If they inputted a correct option, loop breaks
      else
         cout << "Sorry what you entered is invalid, can you please try again?" << endl;
   }while(true);
}


void computePizzaPrice(Pizza *order)
   /*Precondition: N/A
    *Postcondition: Computes the total price of pizza toppings for a select# pizza.
    */
{

   pizza_topping_price = order[pizza_index].num_of_toppings * TOPPING_PRICE;


   if (order[pizza_index].size == 'S')
   {
      order[pizza_index].cost = SMALL_PIZZA_PRICE + pizza_topping_price;
   }

   else if (order[pizza_index].size == 'M')
   {
      order[pizza_index].cost = MEDIUM_PIZZA_PRICE + pizza_topping_price;
   }

   else if (order[pizza_index].size == 'L')
   {
      order[pizza_index].cost = LARGE_PIZZA_PRICE + pizza_topping_price;
   }
}

void anotherPizza(Pizza *order)
   /*Precondition: N/A
    *Postcondition: Function asks if they want to finish their order or get another pizza.
    */
{

   cout << endl << "Do you want another Pizza? 'Y' for yes, 'N' for no";
   cin >> answer;
   answer =  toupper(answer);

   if (pizza_index <= 9)
   {
      if (answer == 'Y')
         pizza_index++;
   }
}

void computeTax(Pizza *order)
   /*Precondition: User must have input 'N' at the another Pizza function,
    * or they have selected the max number of pizzas
    *Postcondition: The added up cost is used to compute the tax
    * */
{

   double temp = 0;       //Local varibale
   for (int index = 0;index <= pizza_index; index++)
      temp = temp + order[index].cost; //adds up all the pizza prices

   tax = temp * 0.10;  //10% tax
   added_up_costs = temp;

}

void bubbleSort(Pizza* order, Pizza* temp, const int MAIN_SIZE)
   /*Precondition: N/A
    *Postcondition: The contents of the order array are rearranged among
    *  its indexes. Now index that have the highest pizza cost are starting from the 1st element.
    * */
{
   int iteration;
   int indexZ;
   for(iteration = 1; iteration < MAIN_SIZE; iteration++)
   {
      for (indexZ = 0; indexZ < MAIN_SIZE - iteration; indexZ++)
         if (order[indexZ].cost < order[indexZ+1].cost )
         {
            temp[0] = order[indexZ];
            for (int index = 0; index <= 6; index++)
            {
               temp[0].toppings[index] = order[indexZ].toppings[index];
            }

            order[indexZ] = order[indexZ+1];
            for (int index = 0; index <= 6; index++)
            {
               order[indexZ].toppings[index] = order[indexZ+1].toppings[index];
            }

            order[indexZ+1] = temp[0];
            for (int index = 0; index <= 6; index++)
            {
               order[indexZ+1].toppings[index] = temp[0].toppings[index];
            }

         }
   }
}


void display(Pizza *order)
   /*Precondition: N/A
    *Postcondition: Displays the wanted info.
    * */
{


   cout << endl << "--------------------------------------------" << endl;
   for (int index = 0;index <= pizza_index; index++)
   {

      cout << "Order#" << index+1 << endl
           << "Pizza crust: " << order[index].crust << endl
           << "Pizza size: " << order[index].size << endl;


      for (int i= 0; i <= 7; i++)   //recent error: wont display anythign after end array topping 7
                                    //update:turned out to be a bufferr overflow, i misthought the max index number
                                    //of toppping array, which is 1 less than elements created, not 1 more.
      {
         cout << "Pizza topping" << i+1 << ": " << order[index].toppings[i] << endl;
      }


      cout << "Cost: " << order[index].cost << endl << endl << endl; // cost works as itended
   }


   total = tax + added_up_costs;

   cout  << endl << endl << "Added up costs: " << added_up_costs << endl
    <<"10% Tax Amount: " << tax << endl
     <<  "Total: "  <<  total << endl << endl;


}
void deleteHeap(Pizza *order, Pizza* temp)
   /*Precondition: N/A
    *Postcondition: Deletes the space allocated in the heap from the order and temp variables.
    * */
{
   // Free array
   delete[] order;
   delete[] temp;
}


