/**/
//읽어 들인 정수값 2개의 비율을 백분율로 출력
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;

	puts("2개의 정숫값을 입력하세요.");
	printf("정수 x: "); scanf_s("%d", &x);
	printf("정수 y: "); scanf_s("%d", &y);

	printf("\nx 값은 y 값의 %d%%입니다.", 100 * x / y);
	/* 
	   !주의!
	   x/y*100 이라고 작성한다면 나눗셈을 하고 난 소수부가 버려져 0이 된다.
	*/	
	//%를 출력할 땐 특수문자 %%로 출력
	return 0;
}