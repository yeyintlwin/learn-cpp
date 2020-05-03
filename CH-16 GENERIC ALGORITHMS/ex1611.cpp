// Listing 16.11: More using the merge() function
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
  strVector1.push_back("Snake");
  strVector1.push_back("Bat");

  strVector2.push_back("Deer");
  strVector2.push_back("Antelope");
  strVector2.push_back("Turtle");
  strVector2.push_back("Snake");
  strVector2.push_back("Fish");

  // Sort the vectors.
  sort(strVector1.begin(), strVector1.end());
  sort(strVector2.begin(), strVector2.end());

  // Display the contents of the vectors.
  cout << "\n\tContents of vectors1:\n";
  for_each(strVector1.begin(), strVector1.end(), showVal);
  cout << endl;
  cout << "\n\tContents of vectors2:\n";
  for_each(strVector2.begin(), strVector2.end(), showVal);
  cout << endl;

  // Search for the sorted range Dwwr, Fish, Snake.
  bool result = includes(strVector1.begin(), strVector1.end(),
                         strVector2.begin() + 1, strVector2.begin() + 3);

  if (result)
    cout << "\tFound sorted range.\n";
  else
    cout << "\tDid not find sorted range.\n";

  return 0;
}
