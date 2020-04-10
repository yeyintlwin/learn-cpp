// Listing 6.18: More on using friends

#include <iostream>

class truck; // A forward reference

class car
{
  int passenger, speed;

public:
  car(int p, int s)
  {
    passenger = p;
    speed = s;
  }

  friend int spGreater(car ca, truck tr);
};

class truck
{
  int weight, speed;

public:
  truck(int w, int s)
  {
    weight = w;
    speed = s;
  }

  friend int spGreater(car ca, truck tr);
};

int spGreater(car c, truck t)
{
  return c.speed - t.speed;
}

int main()
{
  car ca1(6, 55), ca2(2, 75);
  truck tr1(100, 45), tr2(120, 75);

  std::cout << "Comparing car1 and truck1\n";
  int x = spGreater(ca1, tr1);
  if (x < 0)
    std::cout << "Truck1 is faster.\n";
  else if (x == 0)
    std::cout << "Car1 and truck1 speed are the same.\n";
  else
    std::cout << "Car1 is faster.\n";
  return 0;
}
