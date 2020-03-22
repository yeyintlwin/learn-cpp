// Listing 6.6: Showing timer
#include <iostream>
#include <ctime>

class timer
{
  clock_t start;

public:
  timer();
  ~timer();
};

timer::timer()
{
  start = clock();
  std::cout << "Start time = " << start << std::endl;
}

timer::~timer()
{
  clock_t end;
  end = clock();
  std::cout << "End time = " << end << std::endl
            << "Ellapsed time = " << (end - start) << std::endl;
}

int main()
{
  timer obj;
  char c;
  std::cout << "Press a key followed by ENTER\n";
  std::cin >> c;
  return 0;
}
