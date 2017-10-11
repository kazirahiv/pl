#include<stdio.h>
int pyramid(int level);
int main(){
int level;
scanf("%d", &level);
pyramid(level);
}
int pyramid(int level){
int row, col;
for(col=1; col<=level; col++){
for (row=1; row<=2*col; row++){
printf("%d", row);

}
printf("\n");
}

}
