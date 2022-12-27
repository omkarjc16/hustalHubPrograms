#include<stdio.h>
void main(){
    int a=17,b=14,c=13,d=10;
    (a>b)?(b>c)?(c>d)? printf("%d",a):printf("%d",b):printf("%d",c):printf("%d",d);
}