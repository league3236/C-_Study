//�迭 ����ϱ�
//���� 5���� ������ �迭�� �Է¹ް�,
//�Ųٷ� ȭ�鿡 ����Ͻÿ�.
#include <iostream>

using namespace std;

int main()
{
	int k[5], i;

	cout << "�Է� : ";
	for(i=0;i<5;i++)
	{
		cin >> k[i];
	}
	cout << "��� : ";
	for(i=4;i>=0;i--)
	{
		cout << k[i] <<" ";
	}
	cout << "\n";
	fflush(stdin);

	char s[100];

	cout << "�Է� : ";
	cin.getline(s,99);
	cout << "��� : ";
	for (i=strlen(s)-1;i>=0;i--)
	{
		cout << s[i];
	}
	cout << "\n";
	return 0;
}