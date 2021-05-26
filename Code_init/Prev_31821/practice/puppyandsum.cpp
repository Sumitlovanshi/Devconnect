#include<iostream>
using namespace std;
int find(int a){
	int sum=0;
	for(int i=1;i<=a;i++){
		sum+=i;
	}
	return sum;
}
int main(){
	 int t;
	 cin>>t;
	 while(t--){
	 	int n,a;
	 	cin>>n>>a;
	 	while(n--){
	 		a=find(a);
		 }
		 cout<<a<<endl;
	 }
	 
	 return 0;
}
