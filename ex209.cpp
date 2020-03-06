#include <iostream>

void volume(float = 2, float = 3, float = 4);

int main()
{
    volume();
    volume(5);
    volume(5, 7);
    volume(5, 7, 9);

    return 0;
}

void volume(float l, float w, float h)
{
    float vol = l * w * h;
    std::cout << "\nVolume : " << vol << std::endl;
}