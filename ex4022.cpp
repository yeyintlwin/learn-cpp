// Listing 4.22: The new operator and dynamic arrays
#include <iostream>
#include <cstdlib>

int main()
{
  int size;

  // Get the size from the user
  std::cout << "Enter the array size: ";
  std::cin >> size;

  //Allocate memory for the area
  int *arrayX = new int[size];

  // Load the array with random numbers
  for (int i = 0; i < size; i++)
    arrayX[i] = rand();

  // Display the array with random numbers
  for (int i = 0; i < size; i++)
    std::cout << std::endl
              << arrayX[i];
  // Return the allocated memory to the heap
  delete[] arrayX;

  return 0;
}
