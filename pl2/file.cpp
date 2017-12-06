#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int choice;
    char data[100];
    ofstream outfile;
    ifstream infile;

    jump:
        cout<<"1.Create a file"<<endl;
        cout<<"2.Write to a file"<<endl;
        cout<<"3.Read the file"<<endl;
        cout<<"4.Close the file"<<endl;
    cin>>choice;
        if(choice ==1){
            outfile.open("afile.dat");
            goto jump;
            }
        if(choice == 2){
            cout<<"Write Something !"<<endl;
            cin>>data;
            outfile<<data<<endl;
            outfile.close();
            goto jump;
            }
        if(choice == 3){
            infile.open("afile.dat");
            infile >> data;
            cout << data << endl;
            goto jump;
            }
        if(choice == 4){
               infile.close();
                goto jump;
            }

    }
