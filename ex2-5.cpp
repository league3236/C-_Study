
//cin >> str과 cin.getline(str,100)의 차이점??
//다음을 실행하고, 출력결과에 대해 설명하여라.
#include <iostream>

using namespace std;

int main()
{
	char str1[100], str2[100];
	int i = 0;

	cin >> str1;
	cin.getline(str2,99);
	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	
	cout << i-- << ++i << ++i << ++i << endl;
	//부작용 연산자라고 한다. 원래 목적이 아닌 다른 효과로 발생하는 효과.
	// 한스테이트먼트에 사이드이팩트가 있는 연산자를 여러개 하면 
	//호출 순서에 따라 그 결과값이 달라진다.
	return 0;
}