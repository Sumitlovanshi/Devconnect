#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
}*first;

void create(int a[],int n){
	struct node *t,*l;
	first=new node;
	first->data=a[0];
	first->next= NULL ;
	t=first;
		
	for(int i=1;i<n;i++){
		l= new node;
		l->data=a[i];
		l->next= NULL ;
		t->next=l;
		t=l; 
	}
}

void insert(int n,int k, struct node *p){
	for(int i=0;i<k-1;i++){
		p=p->next;
	}
	struct node *m;
	m=new node;
	m->data=n;
	m->next=p->next;
	p->next=m;
}

void display(struct node *p){
	int count=0;
	while(p!=NULL){
		cout<<p->data<<' ';
		p=p->next;
		count++;
	}
	cout<<"\n count is"<<count;
}


int main(){
	int arr[]={1,2,3,34,5,5,6,7,8,9,0};
	create(arr,6);
	
	insert(16,4,first);
	display(first);
	return 0;
}
