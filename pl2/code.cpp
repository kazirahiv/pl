#include<iostream>
using namespace std;
static int total_no_of_flat=0;
static int counter=0;
class House{
private:
    int no_of_room, no_of_washroom, no_of_kitchen;
public:
    House(){
        no_of_room = 0;
        no_of_washroom=0;
        no_of_kitchen=0;
        counter++;
        }
    House(int x, int y, int z){
        no_of_room =x;
        no_of_washroom = y;
        no_of_kitchen = z;
        counter++;
        }
    int set(int x, int y, int z){
        no_of_room = x;
        no_of_washroom= y;
        no_of_kitchen = z;
        }
    int get(){
        cout<<"Number of rooms"<<" "<< no_of_room<<endl;
        cout<<"Number of washroom"<<" "<<no_of_washroom<<endl;
        cout<<"Number of kitchen"<< " "<<no_of_kitchen<<endl;
        }
    int display(){
        cout<<"Number of objects created-"<<counter;
        }

    };

int main(){
    House h1;
    House h2(5,3,2);
    h1.set(1,2,3);
    h1.get();
    h2.get();
    cout<<"Objects Created"<<counter;
    }
