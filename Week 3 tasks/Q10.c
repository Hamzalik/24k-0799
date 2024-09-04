#include<stdio.h>
int main()
{
	float w,h,BMI;
	
	printf("Body Mass Index calculator\n\n");
	printf("Enter height(m):", h);
	scanf("%f", &h);
	
	printf("Enter weight(kg):", w);
	scanf("%f", &w);
	
	BMI = w/(h*h);
	
	printf("Body Mass Index:%f", BMI);
}
