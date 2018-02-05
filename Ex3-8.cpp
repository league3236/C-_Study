#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	int &d=a;
	a=1;
	cout << a << endl;
	(a<<=1+2);  
	cout << a << endl;
	(a*=b=c=3);
	cout << a << endl;
	(a=b==c+2);
	cout << a << endl;
	(d=5);
	cout << a << endl;

	return 0;
}
