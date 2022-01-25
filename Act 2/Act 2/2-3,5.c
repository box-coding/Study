
// 읽어 들인 정숫값 2개의 비율을 백분율로 출력
// 부호 반전
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;

	puts("2개의 정숫값을 입력하세요.");
	printf("정수 x: "); scanf_s("%d", &x);
	printf("정수 y: "); scanf_s("%d", &y);

	printf("x 값은 y값의 %d%%입니다.", 100 * x / y); //퍼센트 기호는 특수문자로 처리 -> %%
	//   !주의!
	//   x/y*100 라고 입력했다면 x/y의 값이 정수값이 되어 0으로 나타났을 것

	printf("\nx와 y의 평균 값 %d의 부호를 반전하면 %d입니다.", (x+y)/2, -((x+y)/2));

	return 0;
}
