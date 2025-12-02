// WAP to find the area of rectangle using call by value method
#include<stdio.h>

int area(int length, int breadth)
{
    return length * breadth;
}

int main()
{
    int l, b;
    
    printf("Enter length of rectangle: ");
    scanf("%d", &l);
    
    printf("Enter breadth of rectangle: ");
    scanf("%d", &b);
    
    printf("Area of rectangle = %d", area(l, b));
    
    return 0;
}
