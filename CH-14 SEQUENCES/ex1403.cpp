// Listing 14.3: Inserting elements in a vector
#include <iostream>
#include <vector>

int main()
{
  // Create a populate the vector
  std::vector<char> charVec;
  for (int j = 0; j < 10; j++)
    charVec.push_back(65 + j);

  // Display the starting vector
  std::cout << "\n\tOriginal vector : ";
  std::vector<char>::iterator iter;
  for (iter = charVec.begin(); iter != charVec.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl
            << std::endl;

  // Insert five Xs into the vector starting from the front
  std::vector<char>::iterator start = charVec.begin();
  charVec.insert(start, 5, '*');

  // Display the result
  std::cout << "\tResultant vector : ";
  for (iter = charVec.begin(); iter != charVec.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  return 0;
}
