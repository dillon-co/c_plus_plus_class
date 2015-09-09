#include <iostream>

using namespace std;

int main()
{
  int large_pizzas;
  int medium_pizzas;
  int small_pizzas;
  int number_of_people;
  int remaining;
  cout << "How many people hae attended?\n" << endl;
  cin >> number_of_people;
  large_pizzas = number_of_people/7;
  remaining = number_of_people - large_pizzas * 7;
  medium_pizzas = (number_of_people%7)/3;
  remaining -= medium_pizzas * 3;
  small_pizzas = remaining;
  cout << "Large pizzas: " << large_pizzas << "\nmedium_pizzas: " <<  medium_pizzas << "\nSmall Pizzas: " << small_pizzas << endl;

}