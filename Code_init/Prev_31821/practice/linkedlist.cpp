/*
author : Instinct 
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long 
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
#define rep(i,n) for (i = 0; i < n; i++) 
#define repa(i,a,n) for (i = a; i <= n; i++)
#define repn(i,n,a) for (i = n; i >= a; i--) 

// create node class having data and pointer to the next element 
class node{
public :
    int data;
    node * next;
};

//function for printing linked list
void print(node* head){
    while(head != NULL){
        cout<< head->data <<"-->";
        head = head->next;
    }
}

//function for inserting at last
void newnode(node *head , int num){
    node *n;
    n = new node;
    n->data = num;
    n->next = NULL;
    node * ptr = head ;
    if(head == NULL){
        head = n;
    }
    while(ptr->next  != NULL){
        ptr = ptr->next;
    }
    ptr->next = n;
    // return head;
}

//function for inserting at the begining
node* inserthead(node * head , int num){
    node *n = new node;
    n->data=num;
    n->next=head;
    head = n;
    // return head;
}

// Function to add a new node at a certain position
node* insertat(node* head , int pos , int num){
    node *n = new node ;
    n->data = num;
    int cnt =0;
    // node *ptr = head;
    while(cnt != pos && head->next != NULL){
        cnt++;
        head = head->next;
    }
    n->next = head->next;
    head->next = n;
    // return head;
}

//function to reverse linked list
void rev(node* &head){
    node * n = NULL;
    node * c = head;
    node * p = NULL;

    while(c != NULL){
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    head = p;
}

void solve()
{
    //create 3 null node pointers
    node * head = NULL;
    node * last = NULL;
    node * second = NULL;

    //make head point to a new node class
    head = new node();
    last = new node();
    second = new node();

    //assign values 
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = last;

    last->data = 3;
    last->next - NULL;

    //print the linked list
    print(head); 
    cout<<endl;
    //adding new node at last by making a function
    // head = newnode(head,4);
    // head =newnode(head,5);
    // head = newnode(head,6);
    // head =newnode(head,7);

    //Add new node at begining of the array
    // head = inserthead(head, 0);
    // head = inserthead(head, 9);
    // head = inserthead(head, 8);
    // head = inserthead(head, 7);

    //add new node at a certain position
    // insertat(head , 1 , 21);

    //reverse the linked list with the function
    rev(head);

    //print the linked list
    print(head); 

}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}