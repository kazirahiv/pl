#include<stdio.h>
void ap(float , float * , float *);
int main(){
float r, area, perimeter;
scanf("%f", &r);
ap(r, &area, &perimeter);

printf("%f %f", area, perimeter);
}

void ap(float x, float *a, float *p){

*a = 3.14*x*x;
*p = 2*3.14*x;

}
