//switchģ��
#include<stdio.h>
#pragma warning (disable:4996)
int main() {
	int day = 0;
	scanf_s("%d", &day);
	switch (day) {//�����˵�һ������û��break,�����ᵼ��������������Ķ�ִ��
		case 1:
			printf("����һ");
			break;
		case 2:
			printf("���ڶ�");
			break;
		case 3:
			printf("������");
			break;
		case 4:
			printf("������");
			break;
		case 5:
			printf("������");
			break;
		case 6:
			printf("������");
			break;
		case 7:
			printf("������");
			break;
		default:
			printf("ѡ�����\n");
			break;

	}
	return 0;
}