#include<stdio.h>
int main()
{
   int st[2][2];

   int i, j, highest_mark;

   int sum=0;
   int avg;

   for(i=0; i<2; i++)
   {
       for(j=0;j<2;j++)
       {
          printf("\nEnter value for st[%d][%d]: ", i, j);
          scanf("%d", &st[i][j]);
          printf("\n");
       }
    }
    for(i=0; i<2; i++)
   {
       for(j=0;j<2;j++)
       {
          sum=sum+st[i][j];
       }
       printf("\nThe %d Student Has Got Total %d marks\n",i+1,sum);

       avg=sum/2;
       printf("The %d student marks on avarage %d\n",i+1,avg);

       sum=0;
       printf("\n");

    }
    highest_mark = st[0][0];
    for(i=0; i<2; i++){
    for(j=0; j<2; j++){
    if(st[i][j]>highest_mark){
        highest_mark = st[i][j];
        }
    }
    }
    printf("Highest mark is %d", highest_mark);

    }
