// Lsting 14.4:removing vector elements
#include <iostream>
#include <vector>

int main()
{
  std::vector<char> charVec;
  for (int j = 0; j < 10; ++j)
    charVec.push_back(65 + j);

  int size = charVec.size();
  std::cout << std::endl;

  for (int k = 0; k < size; ++k)
  {
    charVec.pop_back();
    std::vector<char>::iterator iter;
    std::cout << '\t';
    for (iter = charVec.begin(); iter != charVec.end(); iter++)
      std::cout << *iter;
    std::cout << std::endl;
  }
  return 0;
}
