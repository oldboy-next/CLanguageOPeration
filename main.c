#include<stdio.h>
int primeNumber(int n);
//运行框架
int main() 
{
	int num;
	int two = 2;
	tem:
		printf("请输入一个整数\n");
		scanf("%d", &num);
		two--;
		printf("return %d\n",primeNumber(num));
		printf("\n\n");
		if (two != 0)
			goto tem;
		return 0;
}
int primeNumber(int n)
{
	for (int i = 2; i < n / 2; i++)
	{
		if (n % i == 0) 
		{
			return 0;
			break;
		}
	}
	return 1;
}


