#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		int arr[a][a];
		for(int i=1;i<=a;i++){
			for(int j=1;j<=i;j++){
				cin>>arr[i][j];
			}
		}
			for(int i=a;i>0;i--){
			for(int j=0;j<i;j++){
				if(arr[i][j]<arr[i][j+1]){
					arr[i-1][j] = 	arr[i-1][j] + arr[i][j+1];
				}
				else{
					arr[i-1][j]= arr[i-1][j] + arr[i][j];
				}
			}
		}
		cout<<arr[1][1]<<endl;
	}
	return 0;
}
