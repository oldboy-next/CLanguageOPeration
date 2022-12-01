//P88 习题四 2
#include<stdio.h>
#include<math.h>

//入口函数
int main() {

	printf("从5到100可以被5整除的有：\n");
	for (int i = 5; i <= 100; i++) {
		if (i % 5 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n\n从5到100可以被7整除的有：\n");
	for (int i = 7; i <= 100; i++) {
		if (i % 7 == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}
