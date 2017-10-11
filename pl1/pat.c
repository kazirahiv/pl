#include<stdio.h>
int main() {
int i, j, s;
for(i=6; i>0; i--){
for(s=1; s<=6-i; s++)
        {
            printf("  ");
        }
for(j=1; j<=i*2-1; j++){
    printf(" *");

    }
    printf("\n");
}


}
