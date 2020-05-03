// Listing 16.5: Using the random_shuffle() function
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void showVal(int val)
{
  cout << '\t' << val << endl;
}

int main()
{
  // Create the vector object.
  vector<int> intVector;

  // Populate the vector with value.
  for (int x = 0; x < 7; ++x)
    intVector.push_back(x);

  // Display the contents of the vector.
  cout << "\n\tContents of vector:\n";
  for_each(intVector.begin(), intVector.end(), showVal);

  // Shuffle the vector.
  random_shuffle(intVector.begin(), intVector.end());

  // Display the contents of the new vector.
  cout << "\n\tContents of vector:\n";
  for_each(intVector.begin(), intVector.end(), showVal);

  return 0;
}
