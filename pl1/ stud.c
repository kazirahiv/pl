#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter How Many Students: ");
    scanf("%d",&a);
    printf("\nEnter How Many Subject's: ");
    scanf("%d",&b);
    float stud[a][b],sum=0;

    printf("\nEnter The Student's Mark's:\n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%f",&stud[i][j]);
        }
    }

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
           sum=sum+stud[i][j];
        }
        printf("\nThe Total Mark's Of The Student's %f\n",sum);
        sum = 0;

    }



}
