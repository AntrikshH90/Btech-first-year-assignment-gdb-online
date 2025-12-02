// WAP TO FIND THE MINIMUM AND MAXIMUM ELEMENT OF THE ARRAY
#include<stdio.h>

int main()
{
    int n, i;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0];
    int max = arr[0];
    
    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    
    return 0;
}
