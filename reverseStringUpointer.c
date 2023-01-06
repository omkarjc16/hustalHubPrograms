#include<stdio.h>
void main(){
char *ptr;
int c=0;
char str[20];
printf("Enter the String :");
gets(str);
ptr= str;
for(int i=0;*(ptr+i)!='\0';i++){
   c++;
}
for (int i = c-1; i >=0; i--)
{
    printf("%c",*(ptr+i));
}
}
