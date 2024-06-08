//while模板
#include<stdio.h>
//int main() {
//	int i = 1;
//	while (1) {//但是条件为真执行循环表达式为假那么就退出此循环
//		printf("heheh\n");
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//打印1~10数字
int main() {
	int i = 1;
	while (i <= 10) {
		//if (5 == i) {//break的应用场景
		//	break;//brea作用于最近的一层循环不做用于if语句
		//}
		/*i++;*///只打印除1和5的代码
		printf("%d\t",i);
		i++;
		/*i++;*/
	}
	return 0;
}
//break是用于永久的终止循环
//continue 跳过本次循环后面的代码,直接去判断部分，进行下一次循环的判断
//打印除了5的1到10的数
//int main() {
//	int i = 1;
//	while (i <= 10) {
//		//if (5 == i) {//break的应用场景
//		//	break;//brea作用于最近的一层循环不做用于if语句
//		//}
//		/*i++;*///只打印除1和5的代码
//		if (i == 5) {//continue的应用场景
//			i++;
//			continue;//这样会陷入死循环
//		}
//		printf("%d\t", i);
//		i++;
//		/*i++;*/
//	}
//	return 0;
//}
