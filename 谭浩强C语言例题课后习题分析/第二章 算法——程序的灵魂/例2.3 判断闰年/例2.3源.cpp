#include<stdio.h>
//�ҵĴ�
//int main() {
//	int year = 2000;//�����������ǰ�漸���ֵķ������ 
//	for (int i = year; i <= 2500; i++) {
//		if ((i % 4 == 0)&&(i%100!=0) {//����ð�����µ������������7��ifǶ�׺�ifelse֮����ʲô�����أ��ֱ��Ӧʲô���
//			printf("%d",i);
//		}else if(i)
//	}
//	return 0;
//}
//��ȷ�𰸵�˼·
int main() {
	
	for (int year = 2000; year <= 2500; year++) {//��ȷ�𰸴���if���������Ȱѿ��Զ������뿪�����߼����ַ�������ȱ������Ӳ���
		if (year % 4 != 0) {
			year++;
		}
		else if ((year % 4 == 0) && (year % 100 != 0)) {
			printf("������");
			year++;
		}
		else if ((year%400==0) {
			printf("������");
			year++;
		}
		else {
			printf("��������");
			year++;
		}

	}
	return 0;

}