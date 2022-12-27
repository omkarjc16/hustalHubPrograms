#include<stdio.h>
void main(){
    int n,year,week,days;
    printf("Enter the Days: ");
    scanf("%d",&n);
    year =n/365;
    week= (n%365)/7;
    days=n-(year*365)-(week*7);
    printf("Years = %d \n Weeks =%d \n days =%d",year,week,days);

}