#include<stdio.h>
int main()
{
	int x,y;
	float z;
	printf("Enter salary %d", x);
	printf("Enter tax rate %f", z);
	scanf("%d %f", &x, &z);
	y= x-(x*z/100);

	printf("Salary after tax is %d", y);
	
}