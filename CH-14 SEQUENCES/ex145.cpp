// Listing 14.5: Removing elements anywhere within a vector
#include <iostream>
#include <vector>

int main()
{
  std::vector<char> charVec;
  for (int x = 0; x < 10; ++x)
    charVec.push_back(65 + x);
  int size = charVec.size();

  std::cout << std::endl;
  for (int x = 0; x < size; ++x)
  {
    std::vector<char>::iterator start = charVec.begin();
    charVec.erase(start); // erase forward
    std::vector<char>::iterator iter;

    std::cout << '\t';
    for (iter = charVec.begin(); iter != charVec.end(); iter++)
      std::cout << *iter;
    std::cout << std::endl;
  }
  return 0;
}
