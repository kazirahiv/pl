#include<stdio.h>
struct customer {
     int an;
     char name[25];
     int balance;
                };
struct customer c[2];

int main() {
   int i,wd,accn,amount, index, sum=0;
   for(i=0; i<2; i++){
   printf("Enter customer no %d info \n", i);
   scanf("%d %s %d", &c[i].an,&c[i].name,&c[i].balance);
   printf("%d %s %d \n", c[i].an,c[i].name,c[i].balance);
            }
   printf("Do you want withdrawal(0) or deposit(1) \n");
   scanf("%d", &wd);
   if(wd == 1) {
    printf("Enter amount \n");
    scanf("%d", &amount);
    printf("Enter account number \n");
    scanf("%d", &accn);
    for(i=0; i<2; i++){
    if(c[i].an == accn){
    index = i;
            }
            }
    c[index].balance+=amount;
    printf("Current deposit of id %d is %d \n", index,c[index].balance);
            }
    if(wd == 0) {
    printf("Enter amount \n");
    scanf("%d", &amount);
    printf("Enter account number \n");
    scanf("%d", &accn);
    for(i=0; i<2; i++){
    if(c[i].an == accn){
    index = i;
            }
            }
    if(amount>c[index].balance){
    printf("Insufficient Balance");
            }
     else{
    c[index].balance-=amount;
    printf("Current deposit of id %d is %d", index,c[index].balance);
            }
    }
    }


