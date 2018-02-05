#include <iostream>
using namespace std;

/*
int power(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; ++i)
		result *= a;
	return result;
}

int main()
{
	int a, b;
	cout << "input numbers?";
	cin >> a >> b;
	cout << a << "^" << b << power(a, b);
	return 0;
}
*/

#include "Controller.h"

int main()
{
	Controller cont;
	cont.run();

	return 0;
}