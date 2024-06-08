//switch模块
#include<stdio.h>
#pragma warning (disable:4996)
int main() {
	int day = 0;
	scanf_s("%d", &day);
	switch (day) {//出现了第一个问题没有break,这样会导致满足条件后面的都执行
		case 1:
			printf("星期一");
			break;
		case 2:
			printf("星期二");
			break;
		case 3:
			printf("星期三");
			break;
		case 4:
			printf("星期四");
			break;
		case 5:
			printf("星期五");
			break;
		case 6:
			printf("星期六");
			break;
		case 7:
			printf("星期天");
			break;
		default:
			printf("选择错误\n");
			break;

	}
	return 0;
}