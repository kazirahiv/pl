#include<stdio.h>
int main(){
    int num1, num2, sum;
    FILE *fp_in, *fp_out;
    char line[80];
    fp_in = fopen("in.txt", "r");
    fp_out = fopen("out.txt", "w");
    fgets(line, 80, fp_in);
    printf("Line %s ", line);
    sscanf(line, "%d %d", &num1, &num2);
    sum = num1+num2;
    printf("%d ", sum);
    fprintf(fp_out, "%d\n", sum);
    fclose(fp_in);
    fclose(fp_out);
    printf("%s", line);
    }
