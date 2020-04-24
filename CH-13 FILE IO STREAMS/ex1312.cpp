// Listing 13.12: Seeking a particular object in a file
#include <iostream>
#include <fstream>

class history
{
  char name[30];
  char degree[30];
  int age;

public:
  void getData()
  {
    std::cin >> name >> age >> degree;
  }

  void showData()
  {
    std::cout << "\nName   = " << name << std::endl
              << "Age    = " << age << std::endl
              << "Degree = " << degree << std::endl;
  }
};

int main()
{
  history person;
  std::fstream infile;

  infile.open("history.dat");
  infile.seekg(0, std::ios::end);

  int endpos = infile.tellg();
  int n = endpos / sizeof(history);

  std::cout << "\nThere are " << n << " persons in file";
  std::cout << "\nEnter person number : ";
  std::cin >> n;

  int pos = (n - 1) * sizeof(history);
  infile.seekg(pos);
  infile.read((char *)&person, sizeof person);
  person.showData();
  std::cout << std::endl;

  return 0;
}
