
// �о� ���� ������ 2���� ������ ������� ���
// ��ȣ ����
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;

	puts("2���� �������� �Է��ϼ���.");
	printf("���� x: "); scanf_s("%d", &x);
	printf("���� y: "); scanf_s("%d", &y);

	printf("x ���� y���� %d%%�Դϴ�.", 100 * x / y); //�ۼ�Ʈ ��ȣ�� Ư�����ڷ� ó�� -> %%
	//   !����!
	//   x/y*100 ��� �Է��ߴٸ� x/y�� ���� �������� �Ǿ� 0���� ��Ÿ���� ��

	printf("\nx�� y�� ��� �� %d�� ��ȣ�� �����ϸ� %d�Դϴ�.", (x+y)/2, -((x+y)/2));

	return 0;
}
