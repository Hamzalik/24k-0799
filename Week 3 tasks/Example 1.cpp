#include<stdio.h>
main()
{
//printing character data	
	char ch = 'A';
	printf("Printing character data: %c\n", ch);
	
//print decimal or integer data with d and i
    int x = 45, y = 90;
    printf("Printing decimal data: %d\n", x);
    printf("Printing integer data: %i\n", y);
    
//print float value
    float f = 12.67;
	printf("Printing float data: %f\n", f);
	
//print in scientific notation
    printf("Printing in scientific notation: %e\n", f);
	
//print in octal form
    int a = 67;
    printf("Printing in octal form: %o\n", a);
	
//print in hex
    printf("Printing in hex: %x\n", a);
	
	float z = 3.8;
	printf("float value of y is: %g\n", z);
	printf("Address value of y in hex is: %p\n", &y);
	
	char str;
	printf("%s\n", str);
	printf("shift 20 characters to the right: %20s\n", str);				    
}
