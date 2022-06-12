#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* head = new ListNode();
        ListNode* head1 = head;
        while(temp1 != NULL && temp2 != NULL){
            if (temp1->val < temp2->val){
                head1->next = temp1;
                temp1 = temp1->next;
            }
            
            else{
                head1->next = temp2;
                temp2 = temp2->next;
            }
            head1 = head1->next;
        }
        
        while (temp1 != NULL)
        {
            head1->next = temp1;
            temp1 = temp1->next;
            head1 = head1->next;
        }   
        
         while (temp2 != NULL)
        {
            head1->next = temp2;
            temp2 = temp2->next;
             head1 = head1->next;
        }   
        
        return head->next;
    }

class ListNode{
    int val ;
    ListNode* node;

    public:
        ListNode(x){
            val = x;
            node = NULL;
        }
}

void main(){
    
}