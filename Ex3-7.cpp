
// cout �ѹ������� ������� ���ڿ� ���� ���� ������ ����Ͻÿ�
// �Է� : 1 ��� : You have 1 item �Է� : 3 ��� : You have 3 items

#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "�Է� : ";
	cin >> a;
	cout << "\n��� : "<< "You have " << a <<((a==1)?" item" : " items");
	return 0;
}
