#include <stdio.h> 
# define Bits sizeof(int)*8
void main(){
int num,msb,lsb,temp; //for accepting byte.

printf("Enter the number :"); 
scanf("%d", & num);
temp=num;
msb=num&(1<<(Bits-1));
lsb=temp&1;
printf("%d is the MSB bit ",msb);
printf("%d is the MSB bit ",lsb);

}
// for (int i=0;i<=num ; i++) {
// int rev = num%10;
// num=num/10;
// if(i==0){
//     printf("%d is the LSB bit",rev);
// }
// if(i==num){
//     printf("%d is the MSB bit ",rev);
// }
// }}