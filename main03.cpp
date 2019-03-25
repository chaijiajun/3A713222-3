#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
	float h,w,b;
	printf("請輸入您的身高(m)");
	scanf("%f",&h);
	printf("請輸入您的體重(kg)");
	scanf("%f",&w);
	float rh=h*h;
	b=w/rh;
	printf("您的BMI是%f",b);
	system("pause");
	return 0;
}
