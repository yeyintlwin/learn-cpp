// Listing 7.6: This program generates a Pascal triangle of numbers.

#include <iostream>
#include <iomanip>

const int MAXROW = 20;

int main()
{
  unsigned int lead_sp = 3 * MAXROW;
  unsigned int row[MAXROW];

  row[0] = 1;
  for (int n = 1; n < MAXROW; n++)
    row[n] = 0;

  for (int row_no = 1;; ++row_no)
  {
    for (int i = 1; i <= lead_sp; i++)
      std::cout << " ";
    lead_sp -= 3;

    for (int j = 0; j < row_no; j++)
      std::cout << std::setw(6) << row[j];
    std::cout << std::endl;

    if (row_no == MAXROW)
      break;

    for (int k = row_no; k >= 1; --k)
      row[k] += row[k - 1];
  }
  std::cout << std::endl;
  return 0;
}
