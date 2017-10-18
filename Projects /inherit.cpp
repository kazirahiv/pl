#include<iostream>
using namespace std;
class Circle{
    int pi=3.1416;
public:
   int carea(int r){
   int c_area= 2*pi*r;
   cout<<"Area of circle is:"<<c_area<<endl;
   return c_area;
    }
    };
class Rectangle{
public:
    int rarea(int width, int height){
        int r_area = width*height;
        cout<<"Area of a rectangle is:"<<r_area<<endl;
        return r_area;
        }
    };
class Triangle{
public:
    int tarea(int h, int b){
        int t_area= (h*b)/2;
        cout<<"Area of a triangle is:"<<t_area<<endl;
        return t_area;
        }
    };
class Calculate:public Circle, public Rectangle, public Triangle{
   public:
   int calc(int cr, int r1, int r2, int t1, int t2, int up){
        int ca = carea(cr);
        int ra = rarea(r1,r2);
        int ta = tarea(t1,t2);
        int total = ca+ra+ta;
        cout<<"Unit price is:"<<total*up<<endl;
        }




    };
int main(){
    Calculate obj;
    int cr, r1, r2, t1, t2, up;
    cin>>cr>>r1>>r2>>t1>>t2>>up;
    obj.calc(cr,r1,r2,t1,t2,up);
    }
