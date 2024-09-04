#include<stdio.h>
int main()
{
	unsigned fuel_avg;
	int first_trip=1207, second_trip=1207;
	int fuel_cost1=118, fuel_cost2=123;
	float fuel_used_total, fuel_used1, fuel_used2;
	float fuel_cost;
	
	printf("Enter fuel average %u", fuel_avg);
	scanf("%u", &fuel_avg);
	
	fuel_used1=first_trip/fuel_avg;
	fuel_used2=second_trip/fuel_avg;
	fuel_used_total=fuel_used1 + fuel_used2;
	
	printf("Total fuel consumed is %f", fuel_used_total);
	
	fuel_cost=(fuel_used1*fuel_cost1)+(fuel_used2*fuel_cost2);
	printf("Fuel cost is %f", fuel_cost);
}
