// Listing 4.9: This program sorts an array 
// using the bubble sort method

#include <iostream>

void swap(int *, int *);
void bubbleSort(int *, int);

int main()
{
  const int N = 10;
  int x[N] = {10, 50, 20, 70, 40, 30, 90, 80, 60, 100};

  std::cout << "\nBefore sorting\n";
  for (int j = 0; j < N; j++)
    std::cout << x[j] << " ";

  bubbleSort(x, N);

  std::cout << "\n\nAfter sorting\n";
  for (int j = 0; j < N; j++)
    std::cout << x[j] << std::endl;
  return 0;
}

void swap(int *x, int *y)
{
  if (*x > *y) // This statement is wrong place in logically.
  {
    int temp = *x;
    *x = *y;
    *y = temp;
  }
}

void bubbleSort(int *xp, int n)
{
  for (int j = 0; j < (n - 1); j++)
    for (int k = j + 1; k < n; k++)
      swap(xp + j, xp + k);
}
