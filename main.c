#include<stdio.h>
//运行框架
int main() 
{
	int num, changed = 0;
	int two = 2;
tem:
	printf("请输入一个整数\n");
	scanf("%d", &num);

	for (int i = 2; i < num / 2; i++)
	{
		if (num % i == 0) 
		{
			changed++;
			break;
		}
	}
	if (changed == 0)
		printf("return 1\n");
	else
		printf("return 0\n");
	two--;
	printf("\n\n");
	if (two != 0)
		goto tem;
	return 0;
}


