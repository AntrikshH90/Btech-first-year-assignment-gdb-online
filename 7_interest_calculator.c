// WAP THAT CALCULATES THE SIMPLE INTEREST AND COMPOUND INTEREST. THE PRINCIPAL, AMOUNT, RATE OF INTEREST AND TIME ARE ENTERED THROUGH THE KEYBOARD
#include<stdio.h>
#include<math.h>

int main()
{
    float principal, rate, time, SI, CI;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    
    // Simple Interest
    SI = (principal * rate * time) / 100;
    
    // Compound Interest
    CI = principal * pow((1 + rate/100), time) - principal;
    
    printf("\nSimple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);
    
    return 0;
}
