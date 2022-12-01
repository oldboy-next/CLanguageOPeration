//P88 习题四 7
#include<stdio.h>
//次方计算
int power(int source, int index)
{
	int temp = 1;
	for (int i = 0; i < index; i++) 
	{
		temp *= source;
	}
	return temp;
}

//入口函数
int main() 
{
	int i = 0;//个数
	int n = 0;
	while (n < 1000) {
		i++;
		n += power(i, 3);
		printf("%d ^ 3 = %d\t+=\n", i, n);
		if (n > 1000)
		{
			i--;
			break;
		}
	}
	printf("\nn ^ 3 <1000, n的最大值 = %d\n", i);

	return 0;	
}
