#include<iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    public:
    Node(int num){
        val = num;
        left = NULL;
        right = NULL;
    }
};
//jsut some demo 
int preorder(Node* head){

    if(head == NULL){
        return 0;
    }

    cout<<head->val<<endl;
    preorder(head->left);
    preorder(head->right);
    return 0;

}

int inorder(Node* head){
    
    

    if(head == NULL){
        return 0;
    }
    inorder(head->left);
    cout<<head->val<<endl;
    inorder(head->right);
    return 0;


}

int post_order(Node* head){

     if(head == NULL){
        return 0;
    }
    post_order(head->left);
    post_order(head->right);
    cout<<head->val<<endl;
    return 0;

}

int main(){
    /*int n ;
    cin >> n;
    int arr [n];
    
    for (int i=0; i<n; i++){
        cin>>arr[i];
        cout<<endl;
    }*/

    Node* head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->right->left = new Node(6);
    head->right->right = new Node(7);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    cout<<"Pre-Order from the Binary tree"<<endl;
    preorder(head);
    cout<<"Post-Order from the Binary tree"<<endl;
    post_order(head);
    cout<<"In-Order from the Binary tree"<<endl;
    inorder(head);
}