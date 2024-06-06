//我的答案
//#include<stdio.h>
//int main() {
//	int a = 0,b = 0,sum = 0;
//	scanf("%d %d",&a, &b);//问题1：出现了问题首先在dec C中可以用scanf但是在vs2022中scanf识别为不安全
//	sum = a + b;
//	printf("%d", sum);
//	return 0;
//}
//问题1：解决的办法
//1.头文件输入#pragma warning(disable:4996)
//2.右击工程中源代码(main.c)处，打开属性栏>配置属性>C/C++>所有选项,将SDL检查改为否,保存
//3.把scanf改成scanf_s
//修改后的三种答案
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
//2.直接改就行了

//3.第一种和第三种都选择成我的代码风格方法2有溢出风险就算了

#include<stdio.h>
int main() {
	int a = 0, b = 0, sum = 0;
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	printf("%d", sum);
	return 0;
}

//正确答案：
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