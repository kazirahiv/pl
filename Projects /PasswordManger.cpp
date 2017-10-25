/*This is a password manager.By using it, you can store your
  passwords as encrypted format in a file, then restore them
  whenever you want to!
  Usage:
    1. Select option 1 to store your password.
    2. If you want to see all of your passwords,
       you can select option 2.
    3. Search an specific index using index number.
    4. Option 4 will write your username and password
       in a file named db.
    5. Restore your saved password from a database.
       It will also decrypt them for you.
    6. If need to generate a strong password for using,
       it will do that for you. Input your username,
       because it needs a random string to generate.
    7. Exit !.
 Friendly Reminder !!!!!
    1. Please use lowercase letter for passwords.
    2. Don't add space while entering username.
    3. Don't provide mail address as username.
  */
#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstring>
using namespace std;

class encr{

    public:
    char generated_pass[15];
    char generator(char input[15]){
    char pass[15];
    char generated_Pass[15];
    strcpy(pass,input);
    int   i= 0;
    char ch;
    while(pass[i] != '\0'){
        ch = pass[i];
        switch(ch){
    case 'a':
        ch='S';
        break;
    case 'b':
        ch='9';
        break;
    case 'c':
        ch='W';
        break;
    case 'd':
        ch='F';
        break;
    case 'e':
        ch='A';
        break;
    case 'f':
        ch='X';
        break;
    case 'g':
        ch='n';
        break;
    case 'h':
        ch='j';
        break;
    case 'i':
        ch = 'Z';
        break;
    case 'j':
        ch = '#';
        break;
    case 'k':
        ch = 'P';
        break;
    case 'l':
        ch = '2';
        break;
    case 'm':
        ch='v';
        break;
    case 'n':
        ch='3';
        break;
    case 'o':
        ch='Q';
        break;
    case 'p':
        ch='$';
        break;
    case 'q':
        ch='Y';
        break;
    case 'r':
        ch='x';
        break;
    case 's':
        ch='g';
        break;
    case 't':
        ch='V';
        break;
    case 'u':
        ch='B';
        break;
    case 'v':
        ch='e';
        break;
    case 'w':
        ch='d';
        break;
    case 'x':
        ch='_';
        break;
    case 'y':
        ch='q';
        break;
    case 'z':
        ch='^';
        break;
    case '0':
        ch='5';
        break;
    case '1':
        ch='4';
        break;
    case '2':
        ch='E';
        break;
    case '3':
        ch='1';
        break;
    case '4':
        ch='6';
        break;
    case '5':
        ch='L';
        break;
    case '6':
        ch='7';
        break;
    case '8':
        ch='G';
        break;
    case '9':
        ch='K';
        break;
        }


        generated_Pass[i]=ch;
        i++;
    }
    generated_Pass[i] = '\0';
    strcpy(generated_pass, generated_Pass);
    }

};

class store{
    struct data{
    char username[15];
    char password[15];
    }data[10];
public:
    void set_info(char uname[15], char pass[15], int index=0){
        strcpy(data[index].username, uname);
        strcpy(data[index].password, pass);
        }
    char get_info(int x=0){
        cout<<"\nUsername"<<"("<<x+1<<")"<<"-> \n"<<data[x].username<<"\nPassword"<<"("<<x+1<<")"<<"-> \n"<<data[x].password<<endl;
        }
    void write_db(int x){
        int n=x;
        ofstream outfile;
        outfile.open("db.txt");
        for(int i=0; i<n; i++){
            outfile<<data[i].username<<endl;
            outfile<<data[i].password<<endl;
                }
        outfile.close();
            }
};

class x : public store, public encr {
    public:
        x(){
            cout<<"Starting....."<<endl;
        }
        ~x(){
            cout<<"Terminating.....";
        }
        void find_index(int n){
            int x = n;
            get_info(x);

            }

    char de_generated_pass[15];
    char de_generator(char input[15]){
    char pass[15];
    char de_generated_Pass[15];
    strcpy(pass,input);
    int   i= 0;
    char ch;
    while(pass[i] != '\0'){
        ch = pass[i];
        switch(ch){
    case 'S':
        ch='a';
        break;
    case '9':
        ch='b';
        break;
    case 'W':
        ch='c';
        break;
    case 'F':
        ch='d';
        break;
    case 'A':
        ch='e';
        break;
    case 'X':
        ch='f';
        break;
    case 'n':
        ch='g';
        break;
    case 'j':
        ch='h';
        break;
    case 'Z':
        ch = 'i';
        break;
    case '#':
        ch = 'j';
        break;
    case 'P':
        ch = 'k';
        break;
    case '2':
        ch = 'l';
        break;
    case 'v':
        ch='m';
        break;
    case '3':
        ch='n';
        break;
    case 'Q':
        ch='o';
        break;
    case '$':
        ch='p';
        break;
    case 'Y':
        ch='q';
        break;
    case 'x':
        ch='r';
        break;
    case 'g':
        ch='s';
        break;
    case 'V':
        ch='t';
        break;
    case 'B':
        ch='u';
        break;
    case 'e':
        ch='v';
        break;
    case 'd':
        ch='w';
        break;
    case '_':
        ch='x';
        break;
    case 'q':
        ch='y';
        break;
    case '^':
        ch='z';
        break;
    case '5':
        ch='0';
        break;
    case '4':
        ch='1';
        break;
    case 'E':
        ch='2';
        break;
    case '1':
        ch='3';
        break;
    case '6':
        ch='4';
        break;
    case 'L':
        ch='5';
        break;
    case '7':
        ch='6';
        break;
    case 'G':
        ch='8';
        break;
    case 'K':
        ch='9';
        break;
        }


        de_generated_Pass[i]=ch;
        i++;
    }
    de_generated_Pass[i] = '\0';
    strcpy(de_generated_pass, de_generated_Pass);
    }

        };


int main(){
    char username[15];
    char password[15];
    char new_password[15];
    x e;
    int select;
   jump:
    cout<<"_______________________"<<endl;
    cout<<"*** Password Manager ***"<<endl;
    cout<<"_______________________"<<endl;
    cout<<"\n(1) Store your passwords."<<endl;
    cout<<"(2) List your passwords."<<endl;
    cout<<"(3) Search an specific index."<<endl;
    cout<<"(4) Write the database into a file."<<endl;
    cout<<"(5) Restore database."<<endl;
    cout<<"(6) Generate a strong password."<<endl;
    cout<<"(7) Exit."<<endl;
    cout<<"\nSelect-> ";
    cin>>select;
        if(select == 1){
        int np;
        cout<<"\nYou selected storing passwords"<<endl;
        cout<<"\nFor number of peoples? -> ";
        cin>>np;
        for(int i=0; i<np; i++){
            cout<<"\nEnter Username"<<"("<<i+1<<")-> ";
            cin>>username;
            cout<<"\nEnter Password"<<"("<<i+1<<")-> ";
            cin>>password;
            e.generator(password);
            strcpy(new_password, e.generated_pass);
            e.set_info(username,new_password, i);
            }
            goto jump;
            }
        if(select == 2){
        int np;
        cout<<"\nFor number of peoples?\n ->";
        cin>>np;
        cout<<"You selected Listing passwords"<<endl;
           for(int i=0; i<np; i++){
            e.get_info(i);
                    }
            goto jump;
            }
        if(select == 3){
            int index;
            cout<<"\nEnter index number-> ";
            cin>>index;
            index--;
            e.find_index(index);
            goto jump;
            }
        if(select == 4){
            int index;
            cout<<"\nTotal Index?->";
            cin>>index;
            e.write_db(index);
            cout<<"\nWritten!"<<endl;
            goto jump;
            }
        if(select == 5 ){
            char extracted[15];
            struct edata{
            char username[15];
            char password[15];

            }edata[10];
            cout<<"You selected password decryptor!"<<endl;
            cout<<"\nTotal Index?->";
            int n;
            cin>>n;
            ifstream infile;
            infile.open("db.txt");
            for(int i=0; i<n; i++){
            infile>>edata[i].username;
            infile>>edata[i].password;
                }

            for(int i=0; i<n;i++){

                e.de_generator(edata[i].password);
                strcpy(extracted, e.de_generated_pass);
                cout<<edata[i].username<<endl;
                cout<<extracted<<"\n";
            }
            infile.close();
            goto jump;
            }
        if(select == 6){
            cout<<"\nEnter your Username-> ";
            cin>>password;
            e.generator(password);
            strcpy(new_password, e.generated_pass);
            cout<<"\nGenerated password is-> "<<new_password<<endl;
            goto jump;
            }
        if(select == 7){
            e.~x();

        }

    }

