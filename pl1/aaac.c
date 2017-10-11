#include<stdio.h>
int main(){
int i, j, level=5;
for(i=level; i>=1; i--){
for(j=1; j<=i; j++){
    printf("%d", j);
}
printf("\n");
}

}


