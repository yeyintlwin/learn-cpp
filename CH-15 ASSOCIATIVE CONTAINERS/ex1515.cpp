// Listing 15.15: Searching a map
#include <iostream>
#include <map>

using namespace std;
typedef map<int, char> MYMAP;

int main()
{
  MYMAP charMap;

  // Populate the map with values.
  charMap[1] = 'A';
  charMap[4] = 'D';
  charMap[2] = 'B';
  charMap[5] = 'E';
  charMap[3] = 'C';

  cout << "\n\tContents of map:\n";
  MYMAP::iterator iter;
  for (iter = charMap.begin(); iter != charMap.end(); iter++)
  {
    cout << '\t' << (*iter).first << " --> ";
    cout << (*iter).second << endl;
  }

  // Find the D
  MYMAP::iterator pos = charMap.find(4);
  if (pos == charMap.end())
    cout << "\n\tElement not found.";
  else
    cout << "\n\tElement found: " << (*pos).second;
  cout << endl;

  return 0;
}
