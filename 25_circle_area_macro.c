// WAP TO PRINT THE AREA OF CIRCLE USING MACROS
#include<stdio.h>

#define PI 3.14159
#define AREA(r) (PI * r * r)

int main()
{
    float radius;
    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    printf("Area of circle = %.2f\n", AREA(radius));
    
    return 0;
}
