#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
	float h,w,b;
	printf("�п�J�z������(m)");
	scanf("%f",&h);
	printf("�п�J�z���魫(kg)");
	scanf("%f",&w);
	float rh=h*h;
	b=w/rh;
	printf("�z��BMI�O%f",b);
	system("pause");
	return 0;
}
