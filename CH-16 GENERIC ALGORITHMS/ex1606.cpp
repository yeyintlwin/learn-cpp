// Listing 16.6: Using the partition() function
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void showVal(int val)
{
  cout << '\t' << val << endl;
}

bool equal5(int val)
{
  return (val == 5);
}

int main()
{
  // Create the vector object
  vector<int> intVector;

  // Populate the vector with values
  intVector.push_back(8);
  intVector.push_back(5);
  intVector.push_back(1);
  intVector.push_back(7);
  intVector.push_back(5);
  intVector.push_back(2);
  intVector.push_back(5);

  cout << "\n\tContents of vector:\n";
  for_each(intVector.begin(), intVector.end(), showVal);

  // Partition the vector.
  partition(intVector.begin(), intVector.end(), equal5);

  // Display the contents of the new vector.
  cout << "\n\tContents of vector:\n";
  for_each(intVector.begin(), intVector.end(), showVal);

  return 0;
}
