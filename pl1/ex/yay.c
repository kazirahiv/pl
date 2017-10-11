#include<stdio.h>

int main(){
int order_quantity, stock = 20, credit, supply;
printf("What quantity?");
scanf("%d", &order_quantity);
printf("Your credit?");
scanf("%d", &credit);
if ((order_quantity<= stock) && (credit>= order_quantity * 5))
{
    supply = order_quantity;
    printf("You can recieve %d items", supply);
}
if ((order_quantity<= stock) && (credit<= order_quantity* 5)){
    printf("You have to increase your budget");
}
if ((order_quantity > stock) && (credit>= order_quantity *5)){
    printf("Sorry we dont have this. but you can have %d items",
    stock);

}














}
