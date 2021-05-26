#include <iostream>
using namespace std;

int main(void) {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    int temp=0;
	    while(a>0){
	        temp=temp*10;
	        temp+=a%10;
	            //count++;
	        //if(temp!=0)
	        a=a/10;
	    }
	     cout<<temp;
	    cout<<endl;
	    //temp=0;
	}
	return 0;
}



