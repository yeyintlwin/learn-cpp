// Listing 14.1: Creating a simple vector
#include <iostream>
#include <vector>

int main()
{
  // create a 10-element vector object,
  // of which all the elements are initialized to 15
  std::vector<int> intVec(10, 15);

  // initialize vector element count to zero
  int kount = 0;

  // iterator object iter points to an element stored in the container
  std::vector<int>::iterator iter;

  // display the content of vector object
  std::cout << std::endl;
  for (iter = intVec.begin(); iter != intVec.end(); iter++)
    std::cout << "\tElement #" << kount++ << ": " << *iter << std::endl;

  return 0;
}
