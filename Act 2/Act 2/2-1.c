/**/
//�о� ���� ������ 2���� ������ ������� ���
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;

	puts("2���� �������� �Է��ϼ���.");
	printf("���� x: "); scanf_s("%d", &x);
	printf("���� y: "); scanf_s("%d", &y);

	printf("\nx ���� y ���� %d%%�Դϴ�.", 100 * x / y);
	/* 
	   !����!
	   x/y*100 �̶�� �ۼ��Ѵٸ� �������� �ϰ� �� �Ҽ��ΰ� ������ 0�� �ȴ�.
	*/	
	//%�� ����� �� Ư������ %%�� ���
	return 0;
}