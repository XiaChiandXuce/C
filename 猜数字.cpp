#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

void menu() {
	printf("********************************\n");
	printf("*******     1. play      *******\n");
	printf("*******     0. exit      *******\n");
	printf("********************************\n");
}

void game() {
	int ret = rand() % 100 + 1;
	int num = 0;
	//2.������
	while (1) {
		printf("������֣�>");
		scanf("%d", &num);
		if (num == ret) {
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		else if(num>ret){
			printf("�´���\n");
		}
		else {
			printf("��С��\n");
		}
	}
}
int main() {
	int input = 0;
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�Ƴ���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
return 0;
}