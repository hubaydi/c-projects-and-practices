#include <stdio.h>
#include <math.h>

int main()
{ 
    // int x = 2;


    // x = pow(x, 4);
    // printf("%d \n", x);
    
    // x = sqrt(x);
    // printf("%d \n", x);

    float x = 3.14;

    x = round(x);
    printf("%f \n", x);

    x = 3.59;
    x = ceil(x);
    printf("%f \n", x);

    x = 3.99;
    x = floor(x);
    printf("%f \n", x);
    return 0;
}