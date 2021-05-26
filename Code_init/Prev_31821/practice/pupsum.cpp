#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,sum=0;
	    cin>>a>>b;
	    for(int i=0;i<a;i++){
	        for(int j=b;j<0;j++){
	            sum=sum+j;
	            }
	            b=sum;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

