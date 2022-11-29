#include<stdio.h>

int main() 
{
	char a, b;

	printf("输入两个字符\n");
	scanf("%c%c", &a, &b);

	printf("参数1：%c \n参数2：%c\n", a, b);

	printf("-----交换位置-----\n");
	char temp = a;
	a = b;
	b = temp;
	printf("参数1：%c\n参数2：%c\n", a, b);
	return 0;
}
