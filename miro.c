#include <stdio.h>   
#include <windows.h>   
//#include <conio.h>   

#define UP 72   
#define DOWN 80   
#define LEFT 75   
#define RIGHT 77   

int x,y;   

int map1[20][20]=   
{   
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },   
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },   
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 },   
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },   
    { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },   
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },   
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 },   
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },   
    { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },   
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },   
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 },   
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },   
    { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },   
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },   
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 },   
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },   
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },   
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },   
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }    
};   

void gotoxy(int x, int y)    
{   
	COORD XY = {x, y};   
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), XY);   
}   

void move()   
{   
    int input;   
    input=getch();   
	
    switch(input)   
    {   
    case RIGHT :   
        if(x<40)   
        {   
            if(map1[y][(x/2)+1] == 0)   
            {   
                gotoxy(x,y);   
                printf(" ");   
                x+=2;   
                gotoxy(x,y);   
                printf("¡Ü");   
            }   
        }   
        break;   
		
    case LEFT :   
        if(x>1)   
        {   
			if(map1[y][(x/2)-1] == 0)   
            {   
                gotoxy(x,y);   
                printf(" ");   
                x-=2;   
                gotoxy(x,y);   
				printf("¡Ü");   
            }   
        }   
        break;   
		
    case UP :   
		if(y>1)   
        {   
            if(map1[y-1][x/2] == 0)   
            {   
                gotoxy(x,y);   
                printf(" ");   
                y-=1;   
				gotoxy(x,y);   
                printf("¡Ü");   
            }   
        }   
        break;   
		
	case DOWN :   
        if(y<20)   
        {   
            if(map1[y+1][x/2] == 0)   
			{   
                gotoxy(x,y);   
                printf(" ");   
				y+=1;   
				gotoxy(x,y);   
                printf("¡Ü");   
            }   
        }   
        break;   
    }   
}   


void main()   
{   
    int count,count2;   
    for(count=0;count<20;count++)   
    {   
        for(count2=0;count2<20;count2++)   
        {   
            if(map1[count][count2]==1)   
                printf("¡Û");   
            else  
                printf("  ");   
        }   
        printf("\n");   
    }   
	
    x=0;   
    y=1;   
	
    gotoxy(x,y);   
    printf("¡Ü");   
    while(1)   
    {   
        move();   
    }   
}  
