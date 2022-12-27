#include <stdio.h>
void main()
{

    int num, arr[50], temp;
    printf("Enter the number :");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter the vales :");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("the sorted elements is :\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
}