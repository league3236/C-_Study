#include <iostream>
using namespace std;

int Plus(int a, int b);
int Minus(int a, int b);
int main()
{
	int A,B;
	cout << "Input 2 Numbers: ";
	cin >> A >> B;
	cout << "\n" << "     " << A <<" + " << B << "= " <<Plus(A,B)<<endl;
	cout<< "     " << A <<" - " << B << "= " <<Minus(A,B)<<endl;
	return 0;
}
int Plus(int a, int b)
{
	return a+b;
}
int Minus(int a, int b)
{
	return a-b;
}