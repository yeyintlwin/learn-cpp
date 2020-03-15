#include <iostream>

struct A
{
	int foo;
	float var;
};

int main()
{
	A a[] = {{1, 1.0}, {2, 2.0}, {3, 3.0}};

	A *b = a;

	b++;
	b++;

	std::cout << b->foo << " " << b->var << std::endl;

	return 0;
}
