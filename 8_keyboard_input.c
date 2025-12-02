// AMOUNT, RATE OF INTEREST AND TIME ARE ENTERED THROUGH THE KEYBOARD
#include<stdio.h>

int main()
{
    float amount, rate, time;
    
    printf("Enter amount: ");
    scanf("%f", &amount);
    
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter time period: ");
    scanf("%f", &time);
    
    printf("\nYou entered:\n");
    printf("Amount = %.2f\n", amount);
    printf("Rate = %.2f%%\n", rate);
    printf("Time = %.2f years\n", time);
    
    return 0;
}
