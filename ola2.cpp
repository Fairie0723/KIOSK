/* Description:
// This program will ask the user to choose from a list of breakfast options
// and how many they want. It will then calculate the total cost of the items.
/////////////////////////////////////////////////////////////////*/

//pre=processor directives
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

//namespace
using namespace std;

//main function
int main()
{
  // constant variables
  const double eggMuffinCost = 2.99;
  const double sausageBurritoCost = 4.99;
  const double fruitParfaitCost = 3.56;
  const double hashBrownCost = 1.50;
  double totalPrice; // total price paid
  // selection of item and amount of each item chosen
  int selection, muffinAmt, burritoAmt, parfaitAmt, hashbrownAmt;

  // Greeting for my customers
  cout << "*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*\n";
  cout << "   *******************************************\n";
  cout << "        Welcome to MTSU Breakfast Diner!\n";
  cout << "   *******************************************\n";
  cout << "*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*\n\n";

  // Prompt for user input

  cout << "Please choose from the following:\n";
  cout << "1. Egg Muffin" << setw(9) << "$" << eggMuffinCost << endl;
  cout << "2. Sausage Burrito" << setw(4) << "$" << sausageBurritoCost << endl;
  cout << "3. Fruit Parfait" << setw(6) << "$" << fruitParfaitCost << endl;
  cout << "4. Hashbrowns" << setw(9) << setprecision(2) << fixed << "$" << hashBrownCost << endl;
  cout << "5. Quit\n" << endl;

  cout << "Choose an option: [ ]\b\b";
  cin >> selection; //gets selection from user
  cout << "\n";



   // switches between the selections dependong on the customers choice.
   // if customer enters 0 it will hault the program.
  switch (selection)   
  {
  case 1:
    cout << "You chose an Egg Muffin.\n";
    cout << "Please enter quantity: [ ]\b\b";
    cin >> muffinAmt;
    if (muffinAmt == 0)
    {
      cout << "Invalid option. Please restart the program and try again with numbers 1-5.\n";
    }
    totalPrice = eggMuffinCost * muffinAmt;
    break;
  case 2:
    cout << "You chose a Sausage Burrito.\n";
    cout << "Please enter quantity: [ ]\b\b";
    cin >> burritoAmt;
    if (burritoAmt == 0)
    {
      cout << "Invalid option. Please restart the program and try again with numbers 1-5.\n";
    }
    totalPrice = sausageBurritoCost * burritoAmt;
    break;
  case 3:
    cout << "You chose a Fruit Parfait.\n";
    cout << "Please enter quantity: [ ]\b\b";
    cin >> parfaitAmt;
    if (parfaitAmt == 0)
    {
      cout << "Invalid option. Please restart the program and try again with numbers 1-5.\n";
    }
    totalPrice = fruitParfaitCost * parfaitAmt;
    break;
  case 4:
    cout << "You chose Hashbrowns.\n";
    cout << "Please enter quantity: [ ]\b\b";
    cin >> hashbrownAmt;
    if (hashbrownAmt == 0)
    {
      cout << "Invalid option. Please restart the program and try again with numbers 1-5.\n";
    }
    totalPrice = hashBrownCost * hashbrownAmt;
    break;
  case 5:
    cout << "You chose to Quit.\n";
    cout << "Thank you for Shopping with us!\n";
    cout << "See you again!\n";
    break;
  default:
    cout << "Invalid option. Please restart the program and try again with numbers 1-5.\n";
  }


   // for any choice btween 1 and 5, as long as 0 is not entered for quantity, the order is displayed.

   //egg muffin order summary
  if (selection == 1 && muffinAmt != 0)
  {
    cout << "\n****************************\n";
    cout << "**   Here is your order   **\n";
    cout << "****************************\n\n";
    cout << "-->  " << muffinAmt << " muffins" << endl;
    cout << "-->  @" << eggMuffinCost << " each\n\n";
    cout << "****************************\n";
    cout << "Total Price: $" << totalPrice << endl;
    cout << "****************************\n";
    cout << "Thank you for Shopping with us!\n";
    cout << "See you again!\n";

  }
  //sausage burrito order summary
  else if (selection == 2 && burritoAmt != 0)
  {
    cout << "\n****************************\n";
    cout << "**   Here is your order   **\n";
    cout << "****************************\n\n";
    cout << "-->  " << burritoAmt << " burritos" << endl;
    cout << "-->  @" << sausageBurritoCost << " each\n\n";
    cout << "****************************\n";
    cout << "Total Price: $" << totalPrice << endl;
    cout << "****************************\n";
    cout << "Thank you for Shopping with us!\n";
    cout << "See you again!\n";

  }
  //fruit parfait order summary
  else if (selection == 3 && parfaitAmt != 0)
  {
    cout << "\n****************************\n";
    cout << "**   Here is your order   **\n";
    cout << "****************************\n\n";
    cout << "-->  " << parfaitAmt << " parfaits" << endl;
    cout << "-->  @" << fruitParfaitCost << " each\n\n";
    cout << "****************************\n";
    cout << "Total Price: $" << totalPrice << endl;
    cout << "****************************\n";
    cout << "Thank you for Shopping with us!\n";
    cout << "See you again!\n";

  }
  // hashbrowns order summary
  else if (selection == 4 && hashbrownAmt != 0)
  {
    cout << "\n****************************\n";
    cout << "**   Here is your order   **\n";
    cout << "****************************\n\n";
    cout << "-->  " << hashbrownAmt << " hashbrowns" << endl;
    cout << "-->  @" << hashBrownCost << " each\n\n";
    cout << "****************************\n";
    cout << "Total Price: $" << totalPrice << endl;
    cout << "****************************\n";
    cout << "Thank you for Shopping with us!\n";
    cout << "See you again!\n";

  }

  return 0;
}
