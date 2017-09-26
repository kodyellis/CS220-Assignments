#include <iostream>
#include <cctype>
#include <cstring>


/* struct Pizza()
{
};
*/

void pizza_options();
string getPizzaSizePrice(string);
float computePizzaPrice(float);
float computeTax(float);
void display();


char answer = 'x';
int num_of_toppings = 0;
string pizza_crust;
string pizza_sizes;
string pizza_toppings;
float pizza_size_price;
int num_of_toppings;
int tax;


int main()
{
   pizza_options();
   getPizzaSizePrice(pizza_size);
   computePizzaPrice(pizza_price);
   computeTax(pizza_price);
   display();
}

//who.pizza_crust?


void pizza_options()
{
   cout << "Hello what pizza crust would you like? Hand-tossed, Thin, or Thick";
   cin >> pizza_crust;

   cout << endl << "Hello what pizza size would you like? Small, Medium, or Large";
   cin >> tolower(pizza_size);

   cout << endl <<"Hello how many pizza toppngs do you want?"
   cin >> num_of_toppings;

   cout << endl << "Which toppings would you like? Do you want Pepperoni, Beef, Mushrooms, Green peppers, Tomatoes, Olivers, Pineapples, or Sausage";
   cin >> pizza_toppings;
}


string getPizzaSizePrice(string size)
{
   if size = "small"
      pizza_size_price = 9.5;
      return pizza_size_price;
   if size = "medium"
      pizza_size_price = 11.25;
      return pizza_size_price;
   if size = "large"
      pizza_size_price = 12.5;
      return pizza_size_price;
}


float computePizzaPrice(float price)
{
   price = pizza_size_price + num_of_toppings;
   return price;
}


float computeTax(price)
{
   tax = price * 0.10;
   return tax;
}


void display()
{
   cout << endl << "--------------------------------------------" << endl
        << "Pizza crust: " << pizza_crust << endl
        << "Pizza size: " << pizza_size << endl
        << "Pizza toppings: " << pizza_toppings << endl
        << "10% Tax Amount: " << tax << endl
        << "Total: " << total;
}
