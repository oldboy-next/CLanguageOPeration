#include<stdio.h>
#include<string.h>
char* linkString(char* x, char* y);
//运行框架
int main() 
{

	//输入值
	char str1[20], str2[20];
	printf("请输入字符串str1_\n");
	scanf("%s", str1);
	printf("请输入字符串str2_\n");
	scanf("%s", str2);
	//连接
	char* linkStr = linkString(str1, str2);
	printf("\nlink String: %s\n", linkStr);
	//长度
	printf("\nLink String Lenght %d\n", (int)strlen(linkStr));
	return 0;
}
char* linkString(char* x, char* y) 
{
	//hello
	static char temps[100];
	int index;
	for (int i = 0; i < (int)strlen(x); i++)
	{
		if (x[i] == '\0') break;
		temps[i] = x[i];
		index = i + 1;
	}
	//world
	for (int i = 0; i < (int)strlen(y); i++) 
	{
		if (y[i] == '\0')break;
		temps[index + i] = y[i];
	}
	return temps;
}
