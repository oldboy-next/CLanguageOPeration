//P66习题三 2
#include<stdio.h>
#define TRUE 1
#define FALSE 0
//入口函数
int main()
{

	int length;//指定数组长度3
	printf("输入你要的整数个数_\n");
	scanf("%d", &length);
	//存储数值
	int inNumbs[length];
	printf("请输入%d个整数并以空格开_\n", length);
	//等待输入完指定的整数个数
	for (int i = 0; i < length; i++)
		scanf("%d", &inNumbs[i]);
	//遍历数组
	for (int n = 0; n < length - 1; n++)
	{
		int isChanged = FALSE;
		//排序
		for (int j = 0; j < length - 1; j++) 
		{
			if (inNumbs[j] > inNumbs[j + 1]) 
			{
				int temp = inNumbs[j];
				inNumbs[j] = inNumbs[j + 1];
				inNumbs[j + 1] = temp;
				isChanged = TRUE; //发生变换位置
			}
		}
		if (isChanged == FALSE) {
			break;
		}
	}
	printf("\n从小到大排序\n");
	for (int t = 0; t < length; t++) 
	{
		printf("%d ",inNumbs[t]);//输出
	}

	return 0;
}
