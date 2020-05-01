// Listing 14.2: Adding elements to a vector
#include <iostream>
#include <vector>

int main()
{
  // create an empty vector object
  std::vector<char> charVec;

  // initialize vector element count to zero
  int kount = 0;

  // populate the sequence with the characters 'A' through 'J'
  for (int j = 0; j < 10; ++j)
    charVec.push_back(65 + j);

  std::vector<char>::iterator iter;
  std::cout << std::endl;

  // display the content of the vector object
  for (iter = charVec.begin(); iter != charVec.end(); iter++)
    std::cout << "\tElement #" << kount++ << ": " << *iter << std::endl;

  return 0;
}
