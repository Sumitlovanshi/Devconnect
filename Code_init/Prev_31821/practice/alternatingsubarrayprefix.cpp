/*
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n],flag=0,count=0,ans[n]={0};
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++){
			count=0;
			flag=0;
			for(int j=i;j<n+1;j++){
				if(j==n){
					ans[i]=count;
				}
				else if(arr[j]>0 && flag!=1){
					count++;
					flag=1;
				}
				else if(arr[j]<0 && flag!=2){
					count++;
					flag=2;
				}
				else{
					ans[i]=count;
					break;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<ans[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int ans[n+1];
		ans[n-1]=1;
		for(int i=n-2;i>=0;i--){
			if((arr[i]<0 && arr[i+1]>0)|| (arr[i]>0 && arr[i+1]<0)){
				ans[i]=ans[i+1]+1;
			}
			else{
				ans[i]=1;
			}
		}
		for(int i=0;i<n;i++){
			cout<<ans[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
