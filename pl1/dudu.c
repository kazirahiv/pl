#include<stdio.h>
struct book{
    char bname[25];
    char author[25];
    int page;
    };
struct book b = {"Let us c", "rahiv", 10};
int main(){
struct book *p;
p = &b;
printf("%s %s %d", p->bname, p->author, p->page);
}
