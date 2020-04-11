// Listing 7.3: This program sorts throught a list of
// numbers in ascending order using bubble sort method.

#include <iostream>

void bubbleSort(int x[], int n)
{
  for (int i = 0; i < (n - 2); i++)
    for (int j = 0; j < (n - i - 1); j++)
      if (x[j] > x[j + 1])
      {
        int temp = x[j];
        x[j] = x[j + 1];
        x[j + 1] = temp;
      }
}

int main()
{
  int n, num[25];
  std::cout << "How many numbers? ";
  std::cin >> n;
  std::cout << "Enter " << n << " integer numbers\n";
  for (int i = 0; i < n; i++)
    std::cin >> num[i];
  bubbleSort(num, n);
  std::cout << "\nNumbers sorted in ascending order";
  for (int j = 0; j < n; j++)
    std::cout << std::endl
              << num[j];
  std::cout << std::endl;
  return 0;
}
