#include<stdio.h>


int main(){
struct book {
    char name[30];
    int page;
    float price;

    }
struct book b[5];
int i;
for(i=0; i<5; i++){
        scanf("%s %d %f", &b[i].name, &b[i].page, &b[i].price);
        printf("%s %d %f", b[i].name, b[i].page, b[i].price);
        }

}
