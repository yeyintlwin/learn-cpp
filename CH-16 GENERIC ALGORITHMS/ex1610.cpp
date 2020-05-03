// Listing 16.10: Using the merge() function
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void showVal(string val)
{
  cout << '\t' << val << endl;
}

int main()
{
  // Create the vector objects.
  vector<string> strVector1;
  vector<string> strVector2;
  vector<string> strVector3(7);

  // Populate two vectors with values.
  strVector1.push_back("Zebra");
  strVector1.push_back("Deer");
  strVector1.push_back("Fish");

  strVector2.push_back("Cat");
  strVector2.push_back("Bird");
  strVector2.push_back("Turtle");
  strVector2.push_back("Horse");

  // Display the contents of the vectors.
  cout << "\n\tContents of vectors1:\n";
  for_each(strVector1.begin(), strVector1.end(), showVal);
  cout << "\n\tContents of vectors2:\n";
  for_each(strVector2.begin(), strVector2.end(), showVal);

  // Sort the vectors.
  sort(strVector1.begin(), strVector1.end());
  sort(strVector2.begin(), strVector2.end());

  // Merge the sorted vectors.
  merge(strVector1.begin(), strVector1.end(),
        strVector2.begin(), strVector2.end(),
        strVector3.begin());

  // Display the contents of the new vector.
  cout << "\n\tContent of vector3:\n";
  for_each(strVector3.begin(), strVector3.end(), showVal);

  return 0;
}
