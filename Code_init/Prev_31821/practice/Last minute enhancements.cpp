#include<bits/stdc++.h>
#define intl long long int
using namespace std;
int main(){
	intl t;
	cin>>t;
	while(t--){
		intl n;
		cin>>n;
		int arr[n];
		for(intl i=0;i<n;i++){
			cin>>arr[i];
		}
//		reverse(arr,arr+n);
//		for(int i=0;i<n;i++){
//			cout<<arr[i]<<' ';
//		}
		set <intl> s; 
	//	arr[0]++;
	//	s.insert(arr[0]);
//		ans[0]=arr[0];
	//	arr[0]++;
		for(intl i=0;i<n;i++){
			if(s.count(arr[i])){
				arr[i]++;
			}
			s.insert(arr[i]);
		}
		cout<<s.size()<<endl;
		
	}
	return 0;
}
