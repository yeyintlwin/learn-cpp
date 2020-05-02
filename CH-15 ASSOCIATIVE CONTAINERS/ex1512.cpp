// Listing 15.12: Adding elements to a map
#include <iostream>
#include <map>

typedef std::map<int, char> MYMAP;

int main()
{
  // Create the map object.
  MYMAP charMap;

  // Populate the map with values.
  charMap.insert(MYMAP::value_type(1, 'A'));
  charMap.insert(MYMAP::value_type(3, 'C'));
  charMap.insert(MYMAP::value_type(2, 'B'));
  charMap.insert(MYMAP::value_type(5, 'E'));
  charMap.insert(MYMAP::value_type(4, 'D'));

  // Display the contents of the map.
  std::cout << "\n\tContents of map:\n";
  MYMAP::iterator iter;
  for (iter = charMap.begin(); iter != charMap.end(); iter++)
  {
    std::cout << '\t' << (*iter).first << " --> ";
    std::cout << (*iter).second << std::endl;
  }
  return 0;
}
