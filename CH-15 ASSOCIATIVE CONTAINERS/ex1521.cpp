// Listing 15.21: User-defined predicates
#include <iostream>
#include <map>

// ERROR

using namespace std;

class compare
{
public:
  bool opreator(const int c1, const int c2) const
  {
    return c1 < c2;
  }
};

int main()
{
  // Create the map object.
  map<int, char, compare> charMap;

  // Populate the map with values.
  charMap.insert(map<int, char>::value_type(6, 'F'));
  charMap.insert(map<int, char>::value_type(2, 'B'));
  charMap.insert(map<int, char>::value_type(7, 'G'));
  charMap.insert(map<int, char>::value_type(4, 'D'));
  charMap.insert(map<int, char>::value_type(3, 'C'));
  charMap.insert(map<int, char>::value_type(5, 'E'));
  charMap.insert(map<int, char>::value_type(1, 'A'));

  // Display the contents of the map.
  cout << endl
       << "\n\tContents of map:\n";
  map<int, char>::iterator iter;
  for (iter = charMap.begin(); iter != charMap.end(); iter++)
  {
    cout << '\t' << (*iter).first << " --> ";
    cout << (*iter).second << endl;
  }
  return 0;
}
