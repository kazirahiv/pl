#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* link;
};

struct Node* head;
void print(){
    struct Node * temp;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->link;
    }
}
int main(){
    head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node))
    head -> data = 2;
    head ->link = (struct Node*) malloc(sizeof(struct Node))
    // head = 200
    head->link->data = 3;
    head->link->link = (struct Node*) malloc(sizeof(struct Node));
    head->link->link->data = 4;
    head->link->link->link = NULL;

}
