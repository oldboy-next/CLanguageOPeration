#include<stdio.h>

int fib(int n);
//运行框架
int main() 
{
	int num;
	printf("输入一个整数\n");
	scanf("%d",&num);
	printf("fib(n) = %d\n",fib(num));

	return 0;
}
int fib(int n)
{
	if (n <= 0)
	{
		printf("数值%d较小\n",n);
		return 0;
	}
	else if(n > 40)
	{
		printf("数值%d过大\n",n);
		return 0;
	}	
	if (n == 1 || n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

