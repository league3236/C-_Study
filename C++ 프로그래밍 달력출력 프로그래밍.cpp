//달력 프로그램
//윤년을 구하는 방법
//	4의 배수이면서 100의 배수이면서 400의 배수가 되는 해는 윤년
//	4의 배수이면서 100의 배수가 아닌 해는 윤년

#include <iostream>								// iostream함수 선언

using namespace std;							// using문을 사용하여 namespace 선언

int endday[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 정수 값 배열로 endday[]를 선언하고 1월부터 12월까지의 끝에 날짜 "31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31"를 입력

bool yoonyear(void);							// 윤년인지 아닌지 계산하는 사용자 정의 함수
bool yoonyear(int y);							// 윤년인지 계산하여 int y의 값을 넘기는 사용자 정의 함수
void calendar(void);							// 달력 모양 출력하는 사용자 정의 함수
int firstyear(void);							// 년으로 시작일 구하는 정수형 사용자 정의 함수
int firstMonth(void);							// 달로 시작일 구하는 정수형 사용자 정의 함수

int year, month;								// 정수형 변수들을 선언

main()											// main() 함수 시작
{
	char week[7][4] = {{"Sun"}, {"Mon"}, {"Tue"}, {"Wed"}, {"Thu"}, {"Fri"}, {"Sat"}};
	// char함수를 써서 week라는 2차원 배열 함수 선언후 Sun, Mon, Tue, Wed, Thu, Fri, Sat 의 값을 각각 넣어줌

	while (1)									// while을 항상 참값으로 하기 위해  1을 넣고 선언
	{											// 달력을 계속 돌리기 위한 구조
		while (1)								// while을 항상 참값으로 하기 위해  1을 넣고 선언
		{										// 년도의 값이 틀렸을때 다시 묻기 위한 구조
		cout << "\n 보고픈 년도는? (2000-2099) : ";
		// " 보고픈 년도는? (2000-2099) :  "을 출력
		
		cin >> year;							// 값을 입력받아 year에 저장

		if (year == -1)							// 만약 year의 값이 -1 이라면
		{
			for (int i = 0 ; i < 7 ; i++)
			// 정수형 변수 i에 0을 넣는다, i가 7보다 작으면 i값을 1씩 증가
			{
				cout << week[i] << "\t";	// week 배열을 출력하고 탭으로 간격 띄움
			}
				cout << endl;					// 한줄내림
				year = 2016;					// year 값에 2016을 넣고
				month = 1;						// month 값에 1을 넣은 후
				calendar();						// calendar() 사용자 정의 함수 실행하여
												// 2016년 1월의 달력을 출력한 후
				return 0;						// 프로그램을 종료한다
		}

		if ( year < 2000 || year > 2099 )		// year값이 2000년보다 작거나 2099년보다 크면
		{
			cout <<"\n 2000년과 2099년 사이에서 입력하세요!!" << endl;
			// "2000년과 2099년 사이에서 입력하세요!!" 라는 말을 출력하고 한줄 내린다
		}

		else break;								// 2000년과 2099년 사이이면 while문 탈출
		}										// 탈출 못하면 다시 돌림

		while(1)								// 달을 입력받기 위한 while문 참값으로 1선언
		{										// 잘못된 달을 입력했을때의 예외처리를 위한 구조
			cout << "\n 보고픈 달은? (01-12) : ";// " 보고픈 달은? (01-12) : " 출력
			cin >> month;						// 입력 받은 값을 month 변수에 저장

		if (month >= 1 && month <= 12)			// 만약 month의 값이 1보다 크거나 같고 12보다 작거나 같으면
		{

			for (int i = 0 ; i < 7 ; i++)
			// 정수형 변수 i에 0을 넣는다, i가 7보다 작으면 i값을 1씩 증가
			{
				cout << week[i] << "\t";		// week 배열을 출력하고 탭사용
			}

			cout << endl;						// 한줄 내림
			calendar();							// 사용자 정의 함수 calendar() 실행
			break;								// while문 탈출
		}

		else									// 아니면 
			cout <<"\n 1월과 12월 사이에서 입력하세요!!" <<endl;
			// "1월과 12월 사이에서 입력하세요!!" 출력한다
		}
	}
	return 0;									// 프로그램 종료
}

void calendar(void)								// 사용자 정의함수 calendar 의 내용
{
	int curMonthDay, curday;					// 정수형 변수 curMonthDay 선언

	curMonthDay = (firstyear() + firstMonth()) % 7;
	// firstyear()와 firstMonth()을 더하여 7로 나눈 값을 curMonthDay 변수에 넣음

	curday = curMonthDay;						// curday 변수의 값은 curMonthDay 변수의 값이다
	for (int i = 0 ; i < curMonthDay ; i++)	
	// 정수 i에 0을 넣고 i가 curMonthDay의 값보다 작으면 i는 1씩 증가
	
		cout << "        ";						// "        "을 출력

	for (i = 1 ; i <= endday[month-1] ; i++)
	// i=1 일때 i가 endday[month-1]의 값보다 작거나 같으면 i는 1씩 증가
	{
		cout << " " << i << " " ;				// " " 출력하고 i값 출력후 " " 출력
		if (i < 10)								// 만약 i가 10보다 작으면
			cout << "     ";					// "     "를 출력

		else									// 그 외에는
		    cout << "    ";						// "    "를 출력

		if (curday == 6)						// 만약 curday가 6이라면
		{
			cout << endl;						// 한줄내림
			curday = 0;							// curday 변수에 0을 넣음
		}
		else									// 그 외에는 
			curday++;							// curday 변수 값을 1씩 증가시킨다
	}
	if ( month == 2 && yoonyear() )
		// 만약 month의 값이 2이고 yoonyear()의 실행이 true이면
		cout << " 29" << endl;					// "  29"을 출력하고 한줄 내림
	else										// 아니면 
		cout << endl;							// 한줄 내린다
}

int firstyear(void)								// 정수형 사용자 정의함수 firstyear의 내용
{
	int basic = 1;
	// 2001년 1월 1일 : 월요일을 기준으로 정수형 함수 basic = 1을 선언

	for (int y = 2000; y >= year; y--)
	// 정수형 함수 y의 값으로 2000을 넣고 y가 year보다 크거나 같으면 y값을 1씩 감소시킴
	{
		basic += 6;								// basic에 6을 더한 후 basic에 저장

		if (yoonyear(y))						// 만약 yoonyear(y)가 true면 
			basic += 6;							// basic에 6을 더한 후 basic에 저장
	}

	basic %= 7;									// basic를 7로 나눈 나머지를 basic에 저장

	return basic;								// basic값을 되돌림
}

int firstMonth(void)							// 정수형 사용자 정의 함수 firstMonth 선언
{
	int basic = 0;								// 정수형 변수 basic 에 0을 넣는다

	for (int i = 1; i < month; i++)
		// 정수형 변수 i에 1을 넣고 i가 month보다 작으면 i값을 1증가시킨다
		basic += endday[i-1] % 7;
		// endday[i-1]를 7로 나눈 값의 나머지를 basic와 합한후 basic에 넣는다

	if (month > 2 && yoonyear())				
		// 만약 month의 값이 2보다 크고 yoonyear()값이 true이면
		basic++;								// basic의 값 1증가시킨다

	return basic % 7;							// basic의 값을 7로 나눈 나머지 값을 반환한다
}

bool yoonyear(void)								// 부울 함수 yoonyear 의 내용
{
	if (year % 4 != 0)
		// 만약 year의 값을 4로 나누어서 나머지가 0이 되지 않으면
		return false;							 // 거짓을 반환한다

	if (year % 100 != 0)
		// 만약 year의 값을 100으로 나누어서 나머지가 0이 되지 않으면
		return true;							// 참을 반환한다

	if (year % 400 == 0)
		// 만약 year의 값을 400으로 나누어서 나머지가 0이 되면
		return true;							// 참을 반환한다

	return false;								// 나머지들은 거짓을 반환한다
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