#include<iostream>
using namespace std;
class shape{
public:
    float height, width;
    shape(){
        height=0;
        width=0;
        }
    shape(float x, float y){
        height = x;
        width = y;
        }
    };
class triangle : public shape {
public:
       triangle(): shape(){
}
   triangle(float x, float y): shape(x, y){
}
   float area(){
        int area = (height*width)/2;
        return area;
        }

    };

int main(){
float area;
triangle t1;
area = t1.area();
cout<<"Area is "<<area;
triangle t2(5, 6);
area = t2.area();
cout << "Area is "<<area; }
