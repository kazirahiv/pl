#include<stdio.h>
int main(){
int i,hour,extra;
for(i=1; i<20; i++){
scanf("%d", &hour);
if(hour>40){
extra = (hour-40)*12;
printf("%d", extra);

}

}


}
