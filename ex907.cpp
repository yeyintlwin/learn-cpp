// Listing 9.7: Multiple levels of inheritance
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
    std::cout << "\tEnter the number of publications : ";
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

class foreman : public laborer // Derived class
{
  int quotas;

public:
  void getData()
  {
    employee::getData();
    std::cout << "\tEnter quotas : ";
    std::cin >> quotas;
  }
  void putData()
  {
    employee::putData();
    std::cout << "\n\tQuotas : " << quotas;
  }
};

int main()
{
  laborer l1;
  foreman f1;

  std::cout << "\n\n\tEnter data for laborer1";
  l1.getData();
  std::cout << "\n\tEnter data for foreman1";
  f1.getData();

  std::cout << "\n\nData on laborer1";
  l1.putData();
  std::cout << "\n\nData on foreman1";
  f1.putData();
  std::cout << std::endl;
  return 0;
}
