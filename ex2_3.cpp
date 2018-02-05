/*
#include <iostream>

using namespace std;
int main()
{
	cout << "Primitive Data Type Size is... \n\n";
	cout << "        char(" << sizeof(char) << "), short(" << sizeof(short) << "), int(" << sizeof(int) << "), long(" << sizeof(long) << ")\n"<<endl;
	cout << "        float(" << sizeof(float) << "), double(" << sizeof(double) << "), long double(" << sizeof(long double) << ")\n"<<endl;
	return 0;
}*/
/*
#include <iostream>

using namespace std;

int main()
{
	char str1[100], str2[200];
	cin >> str1; // "\null을 입력받지 못함"
	cin.getline(str2, 100); // "\null을 입력받을수 있음"
	cout << "str1:" << str1 << endl;
	cout << "str2" << str2 << endl;
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	cout << i--;  // 부작용연산자라고 한다. 원래 목적이아닌 다른효과로 발생하는 효과. 한스테이트먼트에 사이드이팩트가 있는 연산자를여러개 하면 호출순서에 따라 그 결과값이 달라진다. 
	cout << ++i;
	cout << ++i;
	cout << ++i;
	// 0 0 1 2
	return 0;
	}
	*/

#include <iostream>

using namespace std;
int main()
{
	int k[5],i;
	cout << "입력 : ";
	for (i = 0; i<5; i++)
	{
		cin >> k[i];
	}
	cout << "출력 : ";
	for (i = 4; i>-1 ; i--)
	{
		cout << k[i] << " ";
	}
	fflush(stdin);
	cout << "\n";

	char s[100];

	cout << "입력 : ";
	cin.getline(s,99);
	cout << "출력 : ";
	for (int i = strlen(s)-1; i>=0; i--)
	{
		cout << s[i];
	}
	cout << "\n";
	return 0;
}
//[cpp금]-0325-곽승혁   메일보내기
//email. wcshin@skuniv.ac.kr
// ex2-1 2-2 2-3 2-5 2-7