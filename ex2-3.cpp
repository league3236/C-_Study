//현재 시스템의 각 data type의 크기를
//출력하는 프로그램을 작성하시오.
// - sizeof 이용
// - char, short, int, long, float, double, long double

#include <iostream>

using namespace std;
int main()
{
	cout << "Primitive Data Type Size is ...\n" << endl;

	cout << "      char(" <<sizeof(char);
	cout << "),short(" <<sizeof(short);
	cout << "),int(" <<sizeof(int);
	cout << "),long(" <<sizeof(long) <<")\n";
	cout << "      float(" <<sizeof(float);
	cout << "),double(" <<sizeof(double);
	cout << "),long double(" <<sizeof(long double) << ")\n";
	
	return 0;
}