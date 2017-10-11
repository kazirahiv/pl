#include<iostream>
using namespace std;
#define size 10
class stac{
    char stac[size];
    int tos;
public:
    void init();
    void push(char ch);
    char pop();
    };
void stac::init(){
        tos = 0;
        }
void stac::push(char ch){
    if(tos==size){
        cout<<"Stack is full";
        return;
    }
    stac[tos]= ch;
    tos++;
    }
char stac:: pop(){
    if(tos==0){cout<<"Stack is empty";}
    tos--;
    return stac[tos];
    }
int main(){
    stac s1, s2;
    int i;
    s1.init();
    s2.init();
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    for(i=0;i<3;i++) cout<<"Pop s1:"<<s1.pop()<<"\n";
    for(i=0;i<3;i++) cout<<"Pop s2:"<<s2.pop()<<"\n";
    }
