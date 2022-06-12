#include<iostream>
using namespace std;

struct  node{
    int num ;
    node* next;

    node(int x){
        num = x;
        next = NULL;
    }

};

node* Reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    
    return prevptr;
}

void Insert_at_Tail(int n, node* &head){
    if(head == NULL){
        node* temp = new node(n);
        head = temp;
    }
    else{
    node* temp1 = new node(n);
    node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = temp1;
    }
}

void print_linked_list(node* head){
    if(head == NULL){
        cout<<"NULL"<<endl;
        return;
    }
    node* temp = head;
    while(temp!=NULL){

        cout<<temp->num<<"->";
        temp = temp->next;
    }
}

void Insert_At_Head (int n, node* &head){
        node* temp = new node(n);
        temp ->next = head;
        head = temp;
    
}

//void search

int main(){
    char ch;
    cout<<"DO you want to add some lements in the linked list (Y/N)"<<endl;
    cin>>ch;
    
    node* head = NULL;
    while (ch == 'Y' || ch =='y'){
        int n;
        char ch1;
        cout<<"Do you want to add this on tail or head"<<endl;
        cin>>ch1;

        if(ch1 == 't' || ch1 =='T'){
            cout<<"Enter the number";
            cin>>n;
            Insert_at_Tail(n,head);
            cout<<"tail";
        }

        else if (ch1 == 'h' || ch1 == 'H'){
            cout<<"Enter the Number";
            cin>>n;
            Insert_At_Head(n, head);
            cout<<"head"<<endl;
        }
        cout<<"DO you want to add some lements in the linked list (Y/N)"<<endl;
        cin>>ch;

    }

    print_linked_list(head);
    cout<<"LinkedList after reversal"<<endl;
    node* temp = Reverse(head);
    print_linked_list(temp);
}
