#include<stdio.h>
int main()
{
	float temp_inp,temp_out;
	int input;
	
	printf("Select the type of cnversion:\n\n");
	printf("1. Celsius to Fahrenheit\n");
	printf("2. Fahrenheit to Celsius\n\n");
	printf("Enter your choice(1 or 2):", input);
	scanf("%d", &input);
	
	if(input == 1)
	{
		printf("\nEnter temperature in Celsius:", temp_inp);
		scanf("%f", &temp_inp);
		
		temp_out = 1.8*temp_inp+32;
		
		printf("\nTemperature in Fahrenheit is %fF", temp_out);
	}
	else if(input == 2)
	{
		printf("\nEnter temperature in Fahrenheit:", temp_inp);
		scanf("%f", &temp_inp);
		
		temp_out = (temp_inp-32)/1.8;
		
		printf("\nTemperature in Celsius is %fC", temp_out);
	}
		
	return 0;
	
}
