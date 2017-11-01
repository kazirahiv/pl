#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
#define SIZE 255
class strtype{
    char *p;
    int len;
public:
    //const
    strtype(){
        p = (char *)malloc(SIZE);
        if(!p){
            cout<<"Allocation Error"<<endl;
            exit(1);
            }
        *p='\0';
        len =0;
        }
    };
