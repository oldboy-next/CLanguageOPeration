#include<stdio.h>
#define COUNT 10
//运行框架
int main() {
	int vector2[COUNT][COUNT];
	// 赋值为1
	for (int i = 0; i < COUNT; i++) {
		for (int j = 0; j < COUNT; j++) {
			vector2[i][j] = 1;
		}
	}
	//
	for (int i = 1; i < COUNT; i++) {
		//printf("i = %d\n ",i);
		for (int j = 1; j < i; j++) {
			vector2[i][j] = vector2[i - 1][j] + vector2[i - 1][j - 1];
			//printf("j = %d\n",j);
		}
	}
	//格式化输出
	for (int i = 0; i < COUNT; i++) {
		for (int k = 0; k < 50 - 5 * i / 2; k++) {
			printf("_");
		}
		for (int j = 0; j <= i; j++) {
			printf("%5d ", vector2[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 90; i++) {
		printf("_");
	}
	return 0;
}

