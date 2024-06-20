#include<stdio.h>
int main() {
	int a[50];
	for (int i = 0; i < 50; i++) {
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < 50; j++) {
		if (a[j] >= 80) {
			printf("%d", a[j]);
		}
	}
	return 0;
}