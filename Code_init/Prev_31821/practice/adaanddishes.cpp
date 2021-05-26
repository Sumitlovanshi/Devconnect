#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+2]={0};
		for(int i=2;i<n+2;i++){
			cin>>arr[i];
		}
		int time=0;
		int a,b,i=2;
		a=arr[n+1];
		b=arr[n];
		do
		{
			time=time+b;
			if(a!=0)
				a-=b;
			b-=b;
			if( n+1-i >= 0 )
				b=arr[n+1-i];
			if(n-i >= 0)
				a=arr[n-i];
			i++;
		}while(n-i != 0);
		
		cout<<time<<endl;
	}
return 0;
}


/*

#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n],a=0,b=0,time=0;
		for(int i=n-1;i>=0;i--){
			cin>>arr[i];
		}
		if(n==1){
			cout<<arr[0]<<endl;
		}
		else if(n==2){
			cout<<arr[0]<<endl;
		}
		else if(n==3){
			a=arr[0];
			b=arr[1]+arr[2];
			if(a>=b){
				cout<<a<<endl;
			}
			else{
				b=b-a;
				cout<<b+a<<endl;
			}
		}
		else{
			a=arr[0];
			b=arr[1];
			a=a+arr[3];
			b=b+arr[2];
			if(a < b){
				cout<<a<<endl;
			}
			else{
				cout<<b<<endl;
			}
		}
	}
	return 0;
}
*/
