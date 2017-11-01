#include<iostream>
using namespace std;
class Rectangle{
     float pi=3.1416;
public:
   float area(float r){
   float sum= 2*pi*r;
   return sum;
    }

    };
class Circle{
public:
    float area(float width, float height){
        float sum = width*height;
        return sum;
        }

    };
class Triangle{
public:
    float area(float h, float b){
        float sum= (h*b)/2;
        return sum;
        }


    };

class Calculate:public Circle, public Rectangle, public Triangle{
   public:
   int calc(float cr, float r1, float r2, float t1, float t2, float up){
        float ca = area(cr);
        float ra = area(r1,r2);
        float ta = area(t1,t2);
        float total = ca+ra+ta;
        cout<<"Unit price is:"<<total*up<<endl;
        }


int main(){
    Calculate obj;
    float cr, r1, r2, t1, t2, up;
    cin>>cr>>r1>>r2>>t1>>t2>>up;
    obj.calc(cr,r1,r2,t1,t2,up);
    }
