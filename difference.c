#include<stdio.h>
#include<math.h>
void main(){
    int n;
    scanf("%d",&n);
    if(n>51){
        printf("%d",(n-51)*(n-51)*(n-51));
    }
    else{
        printf("%d",51-n);
    }
}