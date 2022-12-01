//P66习题三 1
#include<stdio.h>

int main() {
	int iYear;
	printf("请输入一个年份year：\n");
	scanf("%d", &iYear);

	if ((iYear % 4 == 0 && iYear % 100 != 0) || iYear % 400 == 0) {
		if(iYear%400==0){
			printf("\n%d是世纪闰年\n",iYear);
			return 0;
		}
		printf("\n%d是普通闰年\n",iYear);
	}
	else
	{
		printf("\n%d不是闰年\n",iYear);
	}

	return 0;
}
