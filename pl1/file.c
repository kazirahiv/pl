#include<stdio.h>
int main(){
 FILE *fp_in, *fp_out;
 int num1, num2, sum;
 fp_in = fopen("in.txt", "r");
 fp_out = fopen("out.txt", "w");
 fscanf(fp_in, "%d", &num1);
 fscanf(fp_in, "%d", &num2);
 sum = num1+num2;
 printf("%d ", sum);
 fprintf(fp_out, "%d\n", sum);
 fclose(fp_in);
 fclose(fp_out);
    }
