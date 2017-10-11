#include<stdio.h>
int main(){
int days;
printf("Enter days");
scanf("%d", &days);
if(days>=1 && days<=5)
{
printf("Fine is-%d", days*50/100);
}
else
{
if(days>=6&&days<=10)
printf("Fine is-%d", days*1);
else
{
if(days>=10&&days<= 30)
printf("Fine is-%d",days*5);
else
printf("membership is cancelled");
}
}







}
