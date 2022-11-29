/*P33 练一练*/
#include <stdio.h>
//圆周率 宏定义
#define PI 3.14
//计算次方
float Power(float sou,int multi)
{
	float result = 1;
	for (int i = 0; i < multi; i++)
	{
		result *= sou;
	}
	return result;
}
//程序入口
int main()
{
	float rVolume,radius;
	printf("请输入球的半径_\n");
	scanf("%f", &radius);
	printf("球的半径 = %0.2f\n", radius);
	rVolume = 4 / 3 * (float)PI * Power(radius, 3);
	printf("球的体积V = %0.2f\n", rVolume);
	return 0;
}
