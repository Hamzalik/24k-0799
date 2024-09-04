#include<stdio.h>
int main()
{
	float k,m;
	
	printf("Kilometer to mile converter\n\n");
	printf("Enter distance in Kilomerters:", k);
	scanf("%f", &k);
	
	m = k*0.62137;
	
	printf("\nDistance in Miles:%f", m);
}
