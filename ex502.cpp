// Listing 5.2: Reducing complex notation
#include <iostream>

struct Date
{
  int month, day, year;
};

struct playerRec
{
  int playerNo;
  char *name;
  Date birthdate;
};

playerRec players[] = {
    {001, "ARKAR", {5, 11, 1978}},
    {002, "ZARNI", {30, 3, 1976}},
    {0}};

int main()
{
  playerRec *pl = players;
  while (pl->playerNo != 0)
  {
    playerRec &rp = *pl;
    std::cout << rp.name << '\t';
    Date &rd = rp.birthdate;
    std::cout << rd.month << '/'
              << rd.day << '/'
              << rd.month << std::endl;
    pl++;
  }

  return 0;
}
