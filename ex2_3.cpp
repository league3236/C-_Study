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
	cin >> str1; // "\null�� �Է¹��� ����"
	cin.getline(str2, 100); // "\null�� �Է¹����� ����"
	cout << "str1:" << str1 << endl;
	cout << "str2" << str2 << endl;
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	cout << i--;  // ���ۿ뿬���ڶ�� �Ѵ�. ���� �����̾ƴ� �ٸ�ȿ���� �߻��ϴ� ȿ��. �ѽ�����Ʈ��Ʈ�� ���̵�����Ʈ�� �ִ� �����ڸ������� �ϸ� ȣ������� ���� �� ������� �޶�����. 
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
	cout << "�Է� : ";
	for (i = 0; i<5; i++)
	{
		cin >> k[i];
	}
	cout << "��� : ";
	for (i = 4; i>-1 ; i--)
	{
		cout << k[i] << " ";
	}
	fflush(stdin);
	cout << "\n";

	char s[100];

	cout << "�Է� : ";
	cin.getline(s,99);
	cout << "��� : ";
	for (int i = strlen(s)-1; i>=0; i--)
	{
		cout << s[i];
	}
	cout << "\n";
	return 0;
}
//[cpp��]-0325-������   ���Ϻ�����
//email. wcshin@skuniv.ac.kr
// ex2-1 2-2 2-3 2-5 2-7