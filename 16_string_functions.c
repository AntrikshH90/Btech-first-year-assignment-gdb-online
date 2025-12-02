// WAP TO IMPLEMENT STRLEN(), STRCAT(), STRCPY() USING CONCEPT OF FUNCTIONS
#include<stdio.h>

int strlen_func(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

void strcpy_func(char dest[], char src[])
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void strcat_func(char dest[], char src[])
{
    int i = 0, j = 0;
    
    while(dest[i] != '\0')
    {
        i++;
    }
    
    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main()
{
    char str1[100], str2[100], str3[100];
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    printf("\nLength of first string: %d\n", strlen_func(str1));
    
    strcpy_func(str3, str1);
    printf("Copied string: %s\n", str3);
    
    strcat_func(str1, str2);
    printf("Concatenated string: %s\n", str1);
    
    return 0;
}
