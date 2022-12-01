#include<stdio.h>
#define CONUT 11
void format(int* p, int len, char* info);
//运行框架
int main() 
{
	int upArray[CONUT] = {2, 8, 12, 16, 20, 25, 31, 42, 55, 77};//升序数组
	int insNum,index;//假设插入22，插入位置
	format(upArray, CONUT - 1, "源数组");
	printf("请输入要插入到上面数组的整数\n");
	scanf("%d", &insNum);
	//最大或最小时
	if (insNum <= upArray[0])
		index = 0;
	else if (insNum >= upArray[CONUT - 2])//9
		index = CONUT - 1;//10
	else 
	{
		for (int i = 0; i < CONUT; i++)//10
		{
			if (insNum >= upArray[i] && insNum <= upArray[i + 1]) 
			{
				index = i + 1;//5
				break;
			}
		}
	}
	for (int i = CONUT - 2; i >= index; i --)//9 5 9--
	{
		upArray[i + 1] = upArray[i];
	}
	upArray[index] = insNum;
	format(upArray, CONUT, "插入后数组");
	return 0;
}
void format(int* p, int len, char* info) 
{
	printf("%s: \t", info);
	for (int i = 0; i < len; i++)
		printf("%d ", p[i]);
	printf("\t数组长度: %d\n", len);
}
