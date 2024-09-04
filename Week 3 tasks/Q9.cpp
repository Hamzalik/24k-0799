#include<stdio.h>
int main()
{
	float l,w,p;
	
	printf("Perimeter of a rectangle\n\n");
	printf("Enter the width:", w);
	scanf("%f", &w);
	
	printf("Enter the lenght:",l);
	scanf("%f", &l);
	
	p = w*l;
	
	printf("\nPerimeter:%f",p);
}
