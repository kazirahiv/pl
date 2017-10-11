#include<stdio.h>
struct student {
        char name[25];
        int roll;
        char dept[25];
        char course[25];
        int jy;
        };
struct student s[10];
int main() {
  int i,roll,index;
  printf("Enter Student name, roll, dept, course and jy:");
  for(i=0; i<10; i++) {
         scanf("%s %d %s %s %d", &s[i].name, &s[i].roll, &s[i].dept, &s[i].course, &s[i].jy);
         printf("%s %d %s %s %d\n", s[i].name, s[i].roll, s[i].dept, s[i].course, s[i].jy);
                }
  for(i=0; i<10; i++) {
      if(s[i].jy == 2017) {
             printf("Based on year %s %d", s[i].name, s[i].jy);
                }
                }
  printf("Which ones data you want ?");
  scanf("%d", &roll);
  for(i=0; i<10; i++){
    if(s[i].roll == roll) {
            index = i;
            }
            }
  printf("%s %d %s %s %d", s[index].name, s[index].roll, s[index].dept, s[index].course, s[index].jy);
                }
