#include<stdio.h>
display(int a);
int main(){
int i;
int marks[]={12, 13, 14, 15, 16, 17};
for(i=0; i<=5; i++)
    disp(&marks[i]);
}
disp(int *n){
printf("%d ", *n);

}
