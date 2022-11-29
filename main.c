/*P27 练一练*/ 
#include<stdio.h>
#include<math.h>
//计算面积
float Area(float a, float b)
{
	return a * b;
}
//计算周长
float Peri(float a, float b)
{
	float result = a * 2 + b * 2;
	return result;	
}
//程序入口
int main()
{
	//声明变量
	float cubeLong;//矩形长
	float cubeShort;//矩形高
	printf("请输入矩形的长_\n");//提示
	scanf("%f", &cubeLong);
	printf("请输入矩形的高_\n");
	scanf("%f", &cubeShort);
	printf("矩形的长 = %0.2f\n矩形的高 = %0.2f\n", cubeLong, cubeShort);
	float cubeArae = Area(cubeLong, cubeShort);
	float cubePeri = Peri(cubeLong, cubeShort);
	printf("矩形面积 = %0.2f\n矩形周长 = %0.2f\n", cubeArae, cubePeri);
	
	return 0;
}
