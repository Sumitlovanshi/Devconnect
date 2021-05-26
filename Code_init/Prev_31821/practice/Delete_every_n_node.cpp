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

class node{
public :
    int data;
    node * next;
};

void print(node* head){
    while(head != NULL){
        cout<< head->data <<"-->";
        head = head->next;
    }
}

node* inserthead(node * head , int num){
    node *n = new node;
    n->data=num;
    n->next=head;
    head = n;
    return head;
}

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

node* deletn(node* head, int n, int N){
    node * temp = head;
    while(n != N && temp != NULL){
        temp = temp->next;
        n++;
    }
    head->next = temp;
    head = temp;
    return head;
}

void solve()
{
    node * head = new node;
    head->data = 1;
    head->next = NULL;
    newnode(head, 2);
    newnode(head, 3);
    newnode(head, 4);
    newnode(head, 5);
    newnode(head, 6);
    node * Head = head;
    print(head);

    int M=1,N=1;
    int m=0,n=0;
    while(head != NULL){
        m++;
        head = head->next;
        if(m==M){
            head = deletn(head , n , N);
        }
    }
    cout<<endl;
    print(Head);

}


int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}