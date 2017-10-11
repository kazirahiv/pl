#include<stdio.h>
int main(){
int ram, shan, azay;
scanf("%d %d %d", &ram, &shan, &azay);
if (ram<shan){
if (ram<azay)
printf("ram is younger");
else
printf("azay is younger");
}
else
{
if (shan<azay){
printf("shan is younger");
}else
printf("Azay is younger");

}


}

