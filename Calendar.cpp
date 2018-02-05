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
		cout << "Input year & month: ";	//기준일 2000년 1월 1일
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
		printcalendar(year,month);		//calendar 출력함수
		cout << "\n------------------------------\n" << endl;
		cout << "다시 입력하시겠습니까??(Y/N): ";
		cin >> answer ;
	}while(answer!='N'||answer!='n');
	return 0;
}

void printcalendar(int year, int month)
{
	int startday, enter;
	int space = (firstyear(year) + firstMonth(year,month)) % 7;
	enter = space;						// enter 변수의 값은 space 변수의 값이다
	for (startday = 0 ; startday < space ; startday++)	
	// 정수 startday에 0을 넣고 startday가 curMonthDay의 값보다 작으면 startday는 1씩 증가
	
		cout << "    ";						// "        "을 출력

	for (startday = 1 ; startday <= endday[month-1] ; startday++)
	// startday=1 일때 startday가 endday[month-1]의 값보다 작거나 같으면 startday는 1씩 증가
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
	// 2000년 1월 1일 : 토요일을 기준으로 정수형 함수 basic = 4을 선언

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
		// 만약 month의 값이 2보다 크고 yoonyear()값이 true이면
		basic++;								// basic의 값 1증가시킨다

	return basic % 7;							// basic의 값을 7로 나눈 나머지 값을 반환한다
}
bool yoonyear(int y)							// 부울 함수 yoonyear(int y) 의 내용
{
	if (y % 4 != 0)
		// 만약 y의 값을 4로 나누어서 나머지가 0이 되지 않으면
		return false;							// 거짓을 반환한다

	if (y % 100 != 0)
		// 만약 y의 값을 100으로 나누어서 나머지가 0이 되지 않으면
		return true;							// 참을 반환한다

	if (y % 400 == 0)
		// 만약 y의 값을 400으로 나누어서 나머지가 0이 되면
		return true;							// 참을 반환한다

	return false;								// 나머지들은 거짓을 반환한다
}