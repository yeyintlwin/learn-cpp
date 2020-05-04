// Listing 16.13: Using the inner_product() function

/**
 * Example
 * 
 * if:
 * v1 = {0, 1, 2, 3, 4}
 * v2 = {2, 3, 4, 5, 6}
 * 
 * inner product of v1 and v2:
 * {0*2 + 1*3 + 2*4 + 3*5 + 4*6}
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void showVal(int val)
{
  cout << '\t' << val << endl;
}

int main()
{
  // Create and populate the two vector objects.
  vector<int> intVector1;
  vector<int> intVector2;
  for (int x = 0; x < 5; ++x)
    intVector1.push_back(x);
  for (int x = 2; x < 7; ++x)
    intVector2.push_back(x);

  // Display the contents of the vectors.
  cout << "\n\tContents of vector1:\n";
  for_each(intVector1.begin(), intVector1.end(), showVal);
  cout << "\n\tContents of vector2:\n";
  for_each(intVector2.begin(), intVector2.end(), showVal);
  cout << endl;

  // Calculate the inner product.
  int result = inner_product(intVector1.begin(),
                             intVector1.end(), intVector2.begin(), 0);
  cout << "\tResult = " << result << endl;
  return 0;
}
