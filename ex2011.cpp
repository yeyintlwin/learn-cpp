//Using overloaded functions.
#include <iostream>

using namespace std;

const float PI = 3.141593;

float radius, height, volume;

void calVol(float);
void calVol(float, float);

int main()
{
    cout << "Hello" << endl;
    return 0;
}

void calVol(float r)
{
    volume = 4 * PI * r * r * r / 3;
}

void calVol(float r, float h)
{
    volume = 4 * PI * r * r * h;
}