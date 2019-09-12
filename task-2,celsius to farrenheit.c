#include<stdio.h>
main()
{
	int celsius,fahrenheit;
	
	printf("Enter temperature in celsius: ");
	scanf("%d", &celsius);
	fahrenheit = (celsius * 9 / 5) + 32;
	printf("%d celsius = %d	fahrenheit", celsius, fahrenheit);
	return 0;
}
