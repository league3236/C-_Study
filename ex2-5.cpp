
//cin >> str�� cin.getline(str,100)�� ������??
//������ �����ϰ�, ��°���� ���� �����Ͽ���.
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
	//���ۿ� �����ڶ�� �Ѵ�. ���� ������ �ƴ� �ٸ� ȿ���� �߻��ϴ� ȿ��.
	// �ѽ�����Ʈ��Ʈ�� ���̵�����Ʈ�� �ִ� �����ڸ� ������ �ϸ� 
	//ȣ�� ������ ���� �� ������� �޶�����.
	return 0;
}