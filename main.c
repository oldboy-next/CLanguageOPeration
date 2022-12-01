//P66习题三 4
#include<stdio.h>
#include<math.h>

//入口函数
int main() {

	float a, b, c; //边
	printf("输入三条边组成三角形以空格开_\n");
	scanf("%f%f%f", &a, &b, &c);
	printf("a = %0.2f b = %0.2f c = %0.2f\n", a, b, c);

	if (a + b > c && a + c > b && b + c > a) {
		printf("可以组成三角行\n");
		float peri = a + b + c;

		float temp = peri / 2.0f;
		float area = sqrt(temp * (temp - a) * (temp - b) * (temp - c)); //面积
		
		printf("三角形的周长 = %0.2f\n三角形的面积 = %0.2f",peri,area);

	}
	else
	{
		printf("不能组成三角形\n");
	}

	return 0;
}
