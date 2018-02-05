//ex3-6
#include <iostream>

using namespace std;

void reverseBits(int x)
{
	int k[33],i,mod;
	for(i=0;i<33;i++)
	{
		mod=x%2;
		x=x/2;
		k[i]=(mod);
	}
	cout << "입력 : ";
	for(i=32;i>=0;i--)
	{
		cout << k[i] ;
		if(i%4==1)
			cout << " ";
	}
	cout << "\n";
	cout << "출력 : ";
	for(i=0;i<=32;i++)
	{
		cout << k[i] ;
		if(i%4==3)
			cout << " ";
	}
	cout << "\n";
}
int main()
{
	int x;
	cout << "정수를 입력하시오 : " ;
	cin >> x;
	reverseBits(x);
	return 0;
}
