// WAP THAT ACCEPTS THE MARKS OF 5 SUBJECTS AND FINDS THE SUM AND PERCENTAGE MARKS OBTAINED BY THE STUDENT
#include<stdio.h>

int main()
{
    float marks[5], sum = 0, percentage;
    int i;
    
    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i+1);
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
    }
    
    percentage = (sum / 500) * 100;
    
    printf("\nTotal marks = %.2f\n", sum);
    printf("Percentage = %.2f%%\n", percentage);
    
    return 0;
}
