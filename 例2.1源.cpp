//原始求解办法
//#include<stdio.h>
//int main() {
//	int i1 = 1, i2 = 2, i3 = 3, i4 = 4, i5 = 5,p=1;
//	p = i1 * i2 * i3 * i4 * i5;//可以看到这里要写四次乘法确实如书中所说如果有1000个数相乘那么就会导致要写999次
//	printf("%d", p);
//	return 0;
//}
//聪明人写法
//#include<stdio.h>
//int main(){
//	int p = 1, i = 2;//p代表被乘数，i代表乘数
//	//这里出现了问题该选哪一种循环写法呢？作为初学者我们其实是不知道的因为循环是后面的内容假设我们现在都知道循环有while和for循环
//	//法一：
//	//while (i <= 5) {
//	//	//这里乘法其实有两种写法法一：
//	//	p = p * i;
//	//	//法二：如下p *= i;我打比赛我会选择法二因为块，这种但是工程中会选择法一因为清晰
//	//	i++;
//	//}
//	//for循环写法
//	for (int i = 2; i <=5; i++) {
//		p = p * i;//这里不要再写i++了之前我还习惯性的加入
//	}
//	printf("%d",p);
//	return 0;
//}

//1*3*5*7*9
#include<stdio.h>
int main() {
	int p = 1, i = 3;//此处i的初值记得更改
	while (i <= 9) {
		//这里乘法其实有两种写法法一：
		p = p * i;
		i=i+2;
	}
	printf("%d", p);
	return 0;
}

