//�ҵĴ�
//#include<stdio.h>
//int main() {
//	int a = 0,b = 0,sum = 0;
//	scanf("%d %d",&a, &b);//����1������������������dec C�п�����scanf������vs2022��scanfʶ��Ϊ����ȫ
//	sum = a + b;
//	printf("%d", sum);
//	return 0;
//}
//����1������İ취
//1.ͷ�ļ�����#pragma warning(disable:4996)
//2.�һ�������Դ����(main.c)������������>��������>C/C++>����ѡ��,��SDL����Ϊ��,����
//3.��scanf�ĳ�scanf_s
//�޸ĺ�����ִ�
// 1.
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int a = 0, b = 0, sum = 0;
//	scanf("%d %d",&a, &b);
//	sum = a + b;
//	printf("%d", sum);
//	return 0;
//}
//2.ֱ�Ӹľ�����

//3.��һ�ֺ͵����ֶ�ѡ����ҵĴ����񷽷�2��������վ�����

#include<stdio.h>
int main() {
	int a = 0, b = 0, sum = 0;
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	printf("%d", sum);
	return 0;
}

//��ȷ�𰸣�
//#include<stdio.h>
//int main()
//(
//	int a, b, sum;
//	a = 123;
//	b = 456;
//	sum = a + b;
//	printf("sum is %d\n", sum);
//	return 0;
//}