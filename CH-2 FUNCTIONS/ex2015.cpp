// Listing 2.15: This program is a game use to transfer
// the disk from the leftmost pole to the rightmost pole,
// without ever placing a larger disk on top of a smaller
// disk, Only one disk may be moved at a time.

#include <iostream>

void transfer(int, char, char, char);

int main()
{
  int nDisk;

  std::cout << "Welcome to the TOWER OF HANOI\n\n";
  std::cout << "How many disks ? ";
  std::cin >> nDisk;
  std::cout << std::endl;

  transfer(nDisk, 'L', 'R', 'C');

  return 0;
}

void transfer(int n, char from, char to, char temp)
{
  if (n > 0)
  {
    transfer(n - 1, from, temp, to);
    std::cout << "Move disk " << n << " from " << from;
    std::cout << " to " << to << std::endl;
    transfer(n - 1, temp, to, from);
  }
}