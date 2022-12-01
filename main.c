//P88 习题四 4
#include<stdio.h>
#define COUNT 10

//总体安排
void Format(int array[], int typed) 
{
	switch (typed) {
		case 1:
			for (int i = 0; i < COUNT; i++) {
				if (array[i] > 0) { //正数
					printf("%d ", array[i]);
				}
			}
			break;
		case -1:
			for (int i = 0; i < COUNT; i++) {
				if (array[i] < 0) { //负数
					printf("%d ", array[i]);
				}
			}
			break;
		default:
			printf("\n\n错误!typed=1或-1");
			break;
	}
}
//入口函数
int main()
{

	//存储数值
	int lists[COUNT];
	printf("输入%d个整数\n", COUNT);
	for (int i = 0; i < COUNT; i++)
	{
		scanf("%d", &lists[i]);
	}
	//分类
	int just = 0, load = 0, zero = 0;
	for (int i = 0; i < COUNT; i++) 
	{
		if (lists[i] > 0)
			just++;
		if (lists[i] < 0)
			load++;
		if (lists[i] == 0)
			zero++;
	}
	//格式化输出 正数
	printf("\n正数有%d个：",just);
	Format(lists, 1);
	//负数
	printf("\n\n负数有%d个：",load);
	Format(lists, -1);
	//零
	printf("\n\n零有%d个。",zero);
	return 0;
}
