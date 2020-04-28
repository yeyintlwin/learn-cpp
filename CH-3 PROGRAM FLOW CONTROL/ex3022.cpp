// Listing 3.22: This program uses a switch statement to
// control a user's selection.

#include <iostream>

int main()
{
  int choice;
  float charge = 0;

  std::cout << "\tPC EXPRESS Computer Repair Center\n\n";
  std::cout << "What work performed? Here's is choice:\n";
  std::cout << "\t1.Replaced the CPU and RAM\n";
  std::cout << "\t2.Replaced the RAM only\n";
  std::cout << "\t3.Repaired the monitor\n";
  std::cout << "\t4.Fixed stuck keys\n";

  do
  {
    std::cout << "What work performed? ";
    std::cin >> choice;
  } while (choice < 1 || choice > 4);

  switch (choice)
  {
  case 1:
    charge = 200;
  case 2:
    charge += 150;
    break;
  case 3:
    charge = 75;
    break;
  case 4:
    charge = 12;
  }

  //std::cout.precision(2);
  //std::cout.setf(ios::showpoint);
  //std::cout.setf(ios::fixed);
  std::cout << "\nTotal charge is $" << charge << std::endl;

  return 0;
}
