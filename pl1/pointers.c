#include<stdio.h>

int main()
{
struct person { int age; char *name};
struct person first;
first.age=21;
first.name= "rahiv";

struct person second;
second.age= 22;
second.name = "rida";
printf("age %d , name %s", first.age, first.name);
printf("age %d, name %s", second.age, second.name);
}
