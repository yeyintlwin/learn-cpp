// Listing 3.12: This program calculates the payroll for
// four different classes of workers.

#include <iostream>

int main()
{
  int category;
  float wage, hours, pay;

START:
  std::cout << "\nEnter category (any of 1 to 4)\n";
  std::cin >> category;

  switch (category)
  {
  case 1:
    wage = 12.5;
    break;
  case 2:
    wage = 15.5;
    break;
  case 3:
    wage = 20.5;
    break;
  case 4:
    wage = 25.5;
    break;

  default:
  {
    std::cout << "Try again!\n";
    goto START;
  }
  }

  std::cout << "Enter hours worked\n";
  std::cin >> hours;

  if (hours <= 40)
    pay = wage * hours;
  else
    pay = wage * 40 + 1.5 * wage * (hours - 40);

  std::cout << "Pay = " << pay << std::endl;

  return 0;
}

/*
* အလုပ်ချိန် (၄)နာရီ ကျော်လျှင် အချိန်ပိုကို ပုံမှန်ထက် တစ်ဆခွဲပိုပေးရတာဖြစ်ပါတယ်။
**/
