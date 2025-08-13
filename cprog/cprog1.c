#include <stdio.h>

int main()
{
    double radios = 25;    
    double outof = 16;     
    double percentage;

    percentage = (outof / radios) * 100;  

    printf("Percent of radios which are out of order is %.2f", percentage);

    return 0;
}
