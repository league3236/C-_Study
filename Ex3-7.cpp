
// cout 한문장으로 사용자의 숫자에 따라 다음 문장을 출력하시오
// 입력 : 1 출력 : You have 1 item 입력 : 3 출력 : You have 3 items

#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "입력 : ";
	cin >> a;
	cout << "\n출력 : "<< "You have " << a <<((a==1)?" item" : " items");
	return 0;
}
