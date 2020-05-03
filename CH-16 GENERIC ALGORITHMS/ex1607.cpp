// Listing 16.7: Using the rotate function
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void showVal(char val)
{
  cout << '\t' << val << endl;
}

int main()
{

  // Create the vector object.
  vector<char> charVector;

  // Populate the vector with values.
  charVector.push_back('T');
  charVector.push_back('H');
  charVector.push_back('E');
  charVector.push_back('R');
  charVector.push_back('E');
  charVector.push_back(' '); //
  charVector.push_back('H');
  charVector.push_back('I');
  charVector.push_back(' ');

  // Display the contents of the vector.
  cout << "\n\tContents of vector:\n";
  for_each(charVector.begin(), charVector.end(), showVal);

  // Rotste the vector.
  rotate(charVector.begin(), charVector.begin() + 6, charVector.end());

  // Display the contents of the new vector.
  cout << "\n\tContents of vector:\n";
  for_each(charVector.begin(), charVector.end(), showVal);

  return 0;
}
