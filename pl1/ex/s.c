#include<stdio.h>
int main()
{
int pay, hours,i;
for (i=0;i<10;i++){
printf("Enter hours\n");
scanf("%d", &hours);
if(hours>40)
{pay = (hours-40)*12;
printf("His overtime pay %d\n", pay);}
else
printf("No overtime pay\n");

}

}





