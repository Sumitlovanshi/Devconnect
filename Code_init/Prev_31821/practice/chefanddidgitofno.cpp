#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c1=0,c0=0;
		cin>>n;
		while(n != 0){
			if( n%10 == 1){
				c1++;
			}
			else{
				c0++;
			}
			n=n/10;
		}
		if(c1 == 1 || c0 == 1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}



/*
#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string n; cin >> n;
		int l = n.length(), sum = 0;
        for(int i=0;i<l;i++){
    	    if(n[i] == '1') sum += 1;
	    }
        if((sum==1) || (sum==(l-1))) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
	}
	return 0;	
}

*/
