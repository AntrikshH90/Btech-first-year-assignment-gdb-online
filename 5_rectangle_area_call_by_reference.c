// WAP to find the area of rectangle using call by reference method
#include<stdio.h>

void area(int length, int breadth, int *result)
{
    *result = length * breadth;
}

int main()
{
    int l, b, a;
    
    printf("Enter length of rectangle: ");
    scanf("%d", &l);
    
    printf("Enter breadth of rectangle: ");
    scanf("%d", &b);
    
    area(l, b, &a);
    
    printf("Area of rectangle = %d", a);
    
    return 0;
}
