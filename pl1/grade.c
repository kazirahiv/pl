#include <stdio.h>
float pl(float x);
float eng(float y);
float cf(float z);
float grade(float x, float y, float z);
float grade2(float q);
int main()
{
    float a, b, c, x, y, z, t;
    char ch;
    printf("\t\t\t\t\tEnter the marks you have achieved\n\n");

    printf("Programing Language 1 =  ");
    scanf("%f", &a);
    x = pl(a);

    printf("English Reading skills and Public speaking =  ");
    scanf("%f", &b);
    y = eng(b);

    printf("Computer fundamental =  ");
    scanf("%f", &c);
    z = cf(c);

    t = grade(x, y, z);
    ch = grade2(t);

    printf("\n\nYour Grade is: %c(%f)\n\n", ch, t);
    return 0;
}
float pl(float x)
{
    float a;
    if(x>=50 && x<60)
        a = 2.25;
    else if(x>=60 && x<65)
        a = 2.50;
    else if(x>=65 && x<70)
        a = 2.75;
    else if(x>=70 && x<75)
        a = 3.00;
    else if(x>=75 && x<80)
        a = 3.25;
    else if(x>=80 && x<85)
        a = 3.50;
    else if(x>=85 && x<90)
        a = 3.75;
    else if(x>=90 && x<100)
        a = 4.00;
    return a;
}
float eng(float y)
{
    float b;
    if(y>=50 && y<60)
        b = 2.25;
    else if(y>=60 && y<65)
        b = 2.50;
    else if(y>=65 && y<70)
        b = 2.75;
    else if(y>=70 && y<75)
        b = 3.00;
    else if(y>=75 && y<80)
        b = 3.25;
    else if(y>=80 && y<85)
        b = 3.50;
    else if(y>=85 && y<90)
        b = 3.75;
    else if(y>=90 && y<100)
        b = 4.00;
    return b;
}
float cf(float z)
{
    float c;
    if(z<5)
        c = 0.00;
    else if(z>=5 && z<10)
        c = 2.50;
    else if(z>=10 && z<15)
        c = 2.75;
    else if(z>=15 && z<20)
        c = 3.00;
    else if(z>=20 && z<25)
        c = 3.25;
    else if(z>=25 && z<30)
        c = 3.50;
    else if(z>=30 && z<36)
        c = 3.75;
    else if(z>=36 && z<40)
        c = 4.00;
    return c;
}
float grade(float x, float y, float z)
{
    float cgpa;
    cgpa = (x+y+z)/3.00;
    return cgpa;
}
float grade2(float q)
{
    char c;
    if(q>3.75 && q <= 4)
        c = 'A+';
    else if(q>3.50 && q<=3.75)
        c = 'A';
    else if(q>3.25 && q<=3.50)
        c = 'B+';
    else if(q>3.00 && q<=3.25)
        c = 'B';
    else if(q>2.75 && q<=3.00)
        c = 'C+';
    else if(q>2.50 && q<=2.75)
        c = 'C';
    else if(q>2.25 && q<=2.50)
        c = 'D+';
    else if(q==2.25)
        c = 'F';
    return c;
}
