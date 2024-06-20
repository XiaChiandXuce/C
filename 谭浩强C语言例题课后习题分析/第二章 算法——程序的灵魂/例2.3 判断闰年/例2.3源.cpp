#include<stdio.h>
//我的答案
//int main() {
//	int year = 2000;//这里就体现了前面几部分的分析情况 
//	for (int i = year; i <= 2500; i++) {
//		if ((i % 4 == 0)&&(i%100!=0) {//这里冒出了新的问题就是问题7：if嵌套和ifelse之间有什么区别呢？分别对应什么情况
//			printf("%d",i);
//		}else if(i)
//	}
//	return 0;
//}
//正确答案的思路
int main() {
	
	for (int year = 2000; year <= 2500; year++) {//正确答案处理if问题总是先把可以独立分离开来的逻辑部分分离出来先保留复杂部分
		if (year % 4 != 0) {
			year++;
		}
		else if ((year % 4 == 0) && (year % 100 != 0)) {
			printf("是闰年");
			year++;
		}
		else if ((year%400==0) {
			printf("是闰年");
			year++;
		}
		else {
			printf("不是闰年");
			year++;
		}

	}
	return 0;

}