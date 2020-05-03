// Listing 16.9: Using the partial_sort() function
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
  // Create the vector object.
  vector<string> strVector;

  // Populate the vector with values.
  strVector.push_back("Zebra");
  strVector.push_back("Deer");
  strVector.push_back("Fish");
  strVector.push_back("Snake");
  strVector.push_back("Bat");
  strVector.push_back("Cat");
  strVector.push_back("Bird");
  strVector.push_back("Turtle");
  strVector.push_back("Horse");
  strVector.push_back("Cow");

  // Display the contents of the vector.
  cout << "\n\tContents of vector:\n";
  for_each(strVector.begin(), strVector.end(), showVal);
  cout << endl;

  // Sort the vector.
  partial_sort(strVector.begin(), strVector.begin() + 5, strVector.end());

  // Display the contents of the new vector.
  cout << "\n\tContents of vector:\n";
  for_each(strVector.begin(), strVector.end(), showVal);
  return 0;
}
