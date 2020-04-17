// Listing 9.6: Employee database model using inheritance
#include <iostream>

const int LEN = 80;

class employee // Base class
{
  char name[LEN];
  int num;

public:
  void getData()
  {
    std::cout << "\n\tEnter name : ";
    std::cin >> name;

    std::cout << "\tEnter number : ";
    std::cin >> num;
  }
  void putData()
  {
    std::cout << "\n\tName : " << name;
    std::cout << "\n\tNumber : " << num;
  }
};

class manager : public employee // Derived class
{
  char title[LEN];
  double salary;

public:
  void getData()
  {
    employee::getData();
    std::cout << "\tEnter title : ";
    std::cin >> title;

    std::cout << "\tEnter salary : ";
    std::cin >> salary;
  }
  void putData()
  {
    employee::putData();
    std::cout << "\n\tTitle : " << title;
    std::cout << "\n\tSalary : " << salary;
  }
};

class scientist : public employee // Derived class
{
  int pubs;

public:
  void getData()
  {
    employee::getData();
    std::cout << "\tEnter number of publications : ";
    std::cin >> pubs;
  }
  void putData()
  {
    employee::putData();
    std::cout << "\n\tNumber of publications : " << pubs;
  }
};

class laborer : public employee // Derived class
{
};

int main()
{
  manager m1;
  scientist s1;
  laborer l1;

  std::cout << "\n\n\tEnter data for manager1";
  m1.getData();
  std::cout << "\n\tEnter data for scientist1";
  s1.getData();
  std::cout << "\n\tEnter data for laborer1";
  l1.getData();

  std::cout << "\n\n\tData on manager1";
  m1.putData();
  std::cout << "\n\n\tData on scientist1";
  s1.putData();
  std::cout << "\n\n\tData on laborer1";
  l1.putData();

  std::cout << std::endl;

  return 0;
}
