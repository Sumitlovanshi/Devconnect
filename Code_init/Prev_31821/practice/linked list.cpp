#include<iostream>
using namespace std;
struct node{
		int data;
		struct node *next;
	}*first;

void create(int a[], int n){
	int i;
	struct node *t,*last;
	first= new node;
	first->data=a[0];
	first->next=NULL;
	last=first;
		
	for(i=1;i<n;i++)
	{
		t=new node;
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	

}

void display(struct node *p){
		//int min=2,s=0;
		while(p!=NULL){
			cout<<p->data<<' ';
		//	s=s+p->data;
		//	if(p->data<min){
		//		min=p->data;
			
			p=p->next;
			
	}
	//	cout<<"\n sum is "<<s<<endl;
	//	cout<<"min is "<<min;
	}
	
void delet(int k , struct node *p)
{
	struct node *q;
	q=new node;
	while(p!=NULL){
		if(p->data==k){
			q->next = p->next;		
		}
		else
		{
				p=p->next;
			q=p;
		}
			}
}



int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,0};
	create(a,5);
	delet(2, first);
	display(first);
	
	return 0;
}
