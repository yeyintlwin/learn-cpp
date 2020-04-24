// Listing 13.11: I/O with multiple objects
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
  char ch;
  history person;
  std::fstream file;

  file.open("history.dat", std::ios::app | std::ios::out | std::ios::in);
  do
  {
    person.getData();
    file.write((char *)&person, sizeof person);
    std::cout << "\nEnter another person (y/n)? ";
    std::cin >> ch;
  } while (ch == 'y');

  file.seekg(0);
  file.read((char *)&person, sizeof person);

  while (!file.eof())
  {
    std::cout << "\nPerson : ";
    person.showData();
    file.read((char *)&person, sizeof person);
  }
  return 0;
}
