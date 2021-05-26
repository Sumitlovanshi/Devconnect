/*
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		arr[n]=n;
		int count=n;
		for(int i=0;i<n-1;i++){
			if(arr[i] <= arr[i+1]){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}



*/


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n,x;
        cin>>n;
        int cnt=0,prev;
        long long ans=0;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(i==1)
            {
                prev=x;
                cnt++;
            }
            else
            {
                if(prev<=x)
                    cnt++;
                else
                    cnt=1;
            }
            ans+=cnt;
            prev=x;
        }
        cout<<ans<<endl;
    
        
    }
	// your code goes here
	return 0;
}

