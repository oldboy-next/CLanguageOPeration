//习题二 第2小题  p45页
#include <stdio.h>
//求绝对值
float Abs(float value) 
{
	return value > 0 ? value : value * -1.0;
}
//程序入口
int main() 
{
	float inputValue;
	printf("请输入一个实数n\n");
	scanf("%f", &inputValue);
	printf("n的绝对值 = %.2f\n",Abs(inputValue));
	return 0;
}
