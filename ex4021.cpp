// Listeing 4.12: The new and delete operators
#include <iostream>

int main()
{
  // Get memory for an array of integers
  int *birthday = new int[3];

  // Assign values to the array elements
  birthday[0] = 10;
  birthday[1] = 25;
  birthday[2] = 1947;

  // Display the values in the array
  std::cout << "I was born on "
            << birthday[0] << '/'
            << birthday[1] << '/'
            << birthday[2] << std::endl;

  // Return the allocated memory to the heap
  delete[] birthday;
  // Remember, add the square bracket to delete the array.
  return 0;
}
