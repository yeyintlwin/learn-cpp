// Listing 15.11: Creating a simple map
#include <iostream>
#include <map>

int main()
{
  // Create the map object.
  std::map<int, char> charMap;

  // Populate the map with values.
  charMap.insert(std::map<int, char>::value_type(1, 'A'));
  charMap.insert(std::map<int, char>::value_type(2, 'C'));
  charMap.insert(std::map<int, char>::value_type(3, 'B'));
  charMap.insert(std::map<int, char>::value_type(4, 'E'));
  charMap.insert(std::map<int, char>::value_type(5, 'D'));

  // Display the contents of the map.
  std::cout << "\n\tContents of map:\n";
  std::map<int, char>::iterator iter;
  for (iter = charMap.begin(); iter != charMap.end(); iter++)
  {
    std::cout << '\t' << (*iter).first << " --> ";
    std::cout << (*iter).second << std::endl;
  }
  return 0;
}
