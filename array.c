#include <stdio.h>
void main()
{
    int number[10],arr[10],sum = 0,n;
    printf("Enter The How Many Numbers You Want :");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        printf("Enter The Arrays %dth element :", i);
        scanf("%d", &number[i]);
    }
    printf("The Arrays elements is \n");

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", number[i]);
    }
    printf("\n");
    printf("the reverse array is : \n");
    for (int i = n; i >= 0; i--)
    {
        printf("%d ", number[i]);
    }
    printf("\n");
    for (int i = n; i >= 0; i--)
    {
        sum = sum + number[i];
    }
    printf("The sum of Array Elements is :%d \n", sum);
    printf("The duplicate Element of Array is :\n");

    for (int i = 0; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if (number[i] == number[j])
            {
                printf("%d ",number[j]);
            }
        }
    }
    }