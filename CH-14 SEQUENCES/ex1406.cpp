// Listing 14.6: Comparing vectors
#include <iostream>
#include <vector>

int main()
{
  // Create two vector objects.
  std::vector<char> charVec1;
  for (int x = 0; x < 10; ++x)
    charVec1.push_back(65 + x);

  std::vector<char> charVec2;
  for (int x = 0; x < 10; ++x)
    charVec2.push_back(66 + x);

  // Display the vectors.
  std::cout << "\n\tVector 1: ";
  std::vector<char>::iterator iter;
  for (iter = charVec1.begin(); iter != charVec1.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  std::cout << "\n\tVector 2: ";
  for (iter = charVec2.begin(); iter != charVec2.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  // Compare the vectors
  if (charVec1 == charVec2)
    std::cout << "\n\tvector1 == vector2";
  else if (charVec1 < charVec2)
    std::cout << "\n\tvector1 < vector2";
  else
    std::cout << "\n\tvector1 > vector2";
  std::cout << std::endl;

  return 0;
}
