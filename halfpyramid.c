#include<stdio.h>
void halfPyramid(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
    void main(){
        int num;
        scanf("%d",&num);
        halfPyramid(num);
    }