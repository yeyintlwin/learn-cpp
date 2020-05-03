// Listing 16.8: Using the sort() function
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void showVal(char val)
{
  cout << val << " ";
}

int main()
{
  // Create and populate the vector object
  vector<char> charVector;
  charVector.push_back('Z');
  charVector.push_back('D');
  charVector.push_back('F');
  charVector.push_back('S');
  charVector.push_back('A');
  charVector.push_back('Q');
  charVector.push_back('C');
  charVector.push_back('G');
  charVector.push_back('M');
  charVector.push_back('Y');

  cout << "\n\tContents of vector:\n\t";
  for_each(charVector.begin(), charVector.end(), showVal);

  sort(charVector.begin(), charVector.end());

  // Display the contents of the new vector.
  cout << "\n\nContents of vector:\n\t";
  for_each(charVector.begin(), charVector.end(), showVal);
  cout << endl;

  return 0;
}
