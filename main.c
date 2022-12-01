#include<stdio.h>
#include<string.h>

//运行框架
int main() {

	char str1[20], str2[20];
	printf("请输入字符串str1_\n");
	scanf("%s", &str1);
	printf("请输入字符串str2_\n");
	scanf("%s", &str2);
	strcat(str1, str2);
	printf("\nlink str1: %s\n", str1);

	return 0;
}


