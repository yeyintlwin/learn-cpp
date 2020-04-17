// Listing 10.4: Random number generation functions
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  srand(time(0));
  char ans;
  int num;

  do
  {
    int assNum = rand() % 32; // Choose a secret number.
    do
    {
      std::cout << "Guess my secret number (0 - 32)";
      std::cin >> num;

      // Report the status of the guess.
      std::cout << (num < assNum ? "Too low" : num > assNum ? "Too high" : "Right") << std::endl;
    } while (num != assNum);
    std::cout << "Go again? (y/n)";
    std::cin >> ans;
  } while (ans == 'y');
  return 0;
}
