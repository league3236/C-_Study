#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	unsigned char flag = 0;

	flag |= 1;		//0000 0001
	flag |= 2;		//0000 0010
	flag |= 4;		//0000 0100

	printf("%u\n", flag);

	if (flag & 1)
		printf("000 0001은 켜져 있음\n");
	else
		printf("000 0001은 꺼져 있음\n");

	if (flag & 2)
		printf("000 0010은 켜져 있음\n");
	else
		printf("000 0010은 꺼져 있음\n");

	if (flag & 4)
		printf("000 0100은 켜져 있음\n");
	else
		printf("000 0100은 꺼져 있음\n");
	return 0;
}
