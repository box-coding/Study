/*
//읽어들인 정수값에 12를 더한 값과 6을 뺀 값을 각각 출력

#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
	int no;
	printf("정숫값을 입력하세요 : ");
	scanf_s("%d", &no);

	printf("%d에 12를 더하면 ", no);
	printf("%d입니다.\n", no+12);

	printf("%d에 6을 빼면 ", no);
	printf("%d입니다.", no-6);
	return 0;
}
*/