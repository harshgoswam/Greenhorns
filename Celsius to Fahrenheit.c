#include <stdio.h>

 main()
{
    int celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%d Celsius = %d Fahrenheit", celsius, fahrenheit);

}
