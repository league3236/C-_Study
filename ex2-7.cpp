//배열 사용하기
//숫자 5개를 정수형 배열에 입력받고,
//거꾸로 화면에 출력하시오.
#include <iostream>

using namespace std;

int main()
{
	int k[5], i;

	cout << "입력 : ";
	for(i=0;i<5;i++)
	{
		cin >> k[i];
	}
	cout << "출력 : ";
	for(i=4;i>=0;i--)
	{
		cout << k[i] <<" ";
	}
	cout << "\n";
	fflush(stdin);

	char s[100];

	cout << "입력 : ";
	cin.getline(s,99);
	cout << "출력 : ";
	for (i=strlen(s)-1;i>=0;i--)
	{
		cout << s[i];
	}
	cout << "\n";
	return 0;
}