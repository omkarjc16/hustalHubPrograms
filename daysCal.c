#include<stdio.h>
void main(){
    int n,month,years,days,week;
    printf("Enter the Days : ");
    scanf("%d",&n);
    years=n/365;
    month=(n-years*365)/30;
    week=(n-(years*365)-month*30)/7;
    

    days=n-(365*years)-(week*7)-(month*30);
    printf("Years=%d,month=%d ,week=%d,days=%d",years,month,week,days);


}