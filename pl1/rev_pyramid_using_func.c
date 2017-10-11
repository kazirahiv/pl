#include <stdio.h>
pyramid(int x);
int main(){
int level;
scanf("%d", &level);
pyramid(level);

}
int pyramid(int x){
int i, j, k,temp=0;

for(i=x; i>=1; i--){
for(j=1; j<=temp; j++){
    printf("  ");
}
for(k=1; k<= 2*i-1; k++){
    printf("*");
}
temp++;
printf("\n");
}


}
