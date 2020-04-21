// Listing 12.19: Input mermber function
#include <iostream>

int main()
{
  char line[40];
  std::cout << "\n Type a line terminated by carriage return\n > ";
  std::cin.get(line, 40);
  std::cout << "\n " << line << std::endl;
  return 0;
}
