#include<iostream>
using namespace std;

/*struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int v){
        val = v;
        Node* left = NULL;
        Node* right = NULL;
    }
};
*/
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

int search(int arr[], int start, int end, int x){

    for(int i=start; i<=end; i++)
    { 
        if(arr[i]==x){
            return i;
    }
    }
    return -1;
}

Node* built_tree_preorder(int preorder[], int inorder[], int start, int end){
    static int index = 0;

    if(start > end){
        return NULL;
    }

    int current = preorder[index];
    index ++;
    Node* node = new Node(current);
    if(start == end){
        return node;
    }

    int pos = search (inorder, start, end, current);
    node->left = built_tree_preorder(preorder, inorder,start, pos-1);
    node->right = built_tree_preorder(preorder, inorder, pos+1,end);

    return node;
}

void print_some(Node* head){
    if(head == NULL){
        return ;
    }
    
    print_some(head->left);
    cout<<head->val<<endl;
    print_some(head->right);
}

int main(){

    int inorder[] = {8,4,2,9,5,10,1,6,11,3,13,7,12};
    int preorder[] = {1,2,4,8,5,9,10,3,6,11,7,13,12};
    Node* head = built_tree_preorder(inorder, preorder, 0, 12);
    print_some(head);
    return 0;
}