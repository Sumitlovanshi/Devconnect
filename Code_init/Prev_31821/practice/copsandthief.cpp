#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int  m,x,y;
	cin>>m>>x>>y;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
		}
	x=x*y;
	int q,w,ar1[100]={0};
	for(int i=0;i<m;i++){
		q=x+arr[i];
		w=arr[i]-x;
		if(q>100){
			q=100;
		}
		if(w<=0){
			w=0;
		}
		for(int j=w;j<q;j++){
			ar1[j]++;
		}
	}
	int count=0;
	for(int i=0;i<100;i++){
		if(ar1[i]==0){
			count++;
		}
	}
	cout<<count<<endl;
	}
	return 0;
}
