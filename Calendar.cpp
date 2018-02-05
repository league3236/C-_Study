#include <iostream>

using namespace std;

void printcalendar(int year,int month);
bool yoonyear(int year);
int firstMonth(int year,int month);
int firstyear(int year);	
int endday[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	int year, month, i;
	char answer;
	char week[7][4] = {{"Sun"},{"Mon"},{"Tue"},{"Wed"},{"Thu"},{"Fri"},{"Sat"}};
		//[0]="Sun,"[1]="Mon"[2]="Tue".....

	do
	{
		cout << "Input year & month: ";	//������ 2000�� 1�� 1��
		cin >> year >> month;
		if(yoonyear(year))
			endday[1]=29;
		else endday[1]=28;

		cout << "\n------------------------------\n" << endl;
		if(month>=1&&month<=12)
		{
			for(i=0;i<7;i++)
				cout << week[i] << " ";
		}

		cout << endl;
		printcalendar(year,month);		//calendar ����Լ�
		cout << "\n------------------------------\n" << endl;
		cout << "�ٽ� �Է��Ͻðڽ��ϱ�??(Y/N): ";
		cin >> answer ;
	}while(answer!='N'||answer!='n');
	return 0;
}

void printcalendar(int year, int month)
{
	int startday, enter;
	int space = (firstyear(year) + firstMonth(year,month)) % 7;
	enter = space;						// enter ������ ���� space ������ ���̴�
	for (startday = 0 ; startday < space ; startday++)	
	// ���� startday�� 0�� �ְ� startday�� curMonthDay�� ������ ������ startday�� 1�� ����
	
		cout << "    ";						// "        "�� ���

	for (startday = 1 ; startday <= endday[month-1] ; startday++)
	// startday=1 �϶� startday�� endday[month-1]�� ������ �۰ų� ������ startday�� 1�� ����
	{
		cout << " " << startday << " " ;			
		if (startday < 10)					
			cout << " ";				
		if (enter == 6){cout << endl;						
			enter = 0;							
		}
		else								
			enter++;						
	}
}
int firstyear(int year)							
{
	int basic = 4;
	// 2000�� 1�� 1�� : ������� �������� ������ �Լ� basic = 4�� ����

	for (int y = 2000; y >= year; y--)
	{
		basic += 6;								
		if (yoonyear(y))						
			basic += 6;							
	}	basic %= 7;				

	return basic;	
}
int firstMonth(int year,int month)
{
	int basic = 0;							
	for (int i = 1; i < month; i++)
		basic += endday[i-1] % 7;
	if (month > 2 && yoonyear(year))				
		// ���� month�� ���� 2���� ũ�� yoonyear()���� true�̸�
		basic++;								// basic�� �� 1������Ų��

	return basic % 7;							// basic�� ���� 7�� ���� ������ ���� ��ȯ�Ѵ�
}
bool yoonyear(int y)							// �ο� �Լ� yoonyear(int y) �� ����
{
	if (y % 4 != 0)
		// ���� y�� ���� 4�� ����� �������� 0�� ���� ������
		return false;							// ������ ��ȯ�Ѵ�

	if (y % 100 != 0)
		// ���� y�� ���� 100���� ����� �������� 0�� ���� ������
		return true;							// ���� ��ȯ�Ѵ�

	if (y % 400 == 0)
		// ���� y�� ���� 400���� ����� �������� 0�� �Ǹ�
		return true;							// ���� ��ȯ�Ѵ�

	return false;								// ���������� ������ ��ȯ�Ѵ�
}