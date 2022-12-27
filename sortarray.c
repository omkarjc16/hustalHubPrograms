#include<stdio.h>
int main()
{
    int s,t;
    printf("Enter the size of Array :");
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++){
    printf("Enter the %dth element :",i);
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
        if(arr[i]>arr[j]){
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;

        }
    }
    }
    for (int i = 0; i < s; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
