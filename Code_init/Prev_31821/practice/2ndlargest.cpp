#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	int x,y,z;
	while(a--)
	{
	    cin>>x>>y>>z;
	    if(x>y && x>z)
	    {
	        if(y>z)
	        {
	            cout<<y<<endl;
	        }
    	        else{ cout<<z<<endl; }
	    
	    }
	    else if(y>x && y>z)
	    {
	        if(x>z){cout<<x<<endl;}
	        else{cout<<z<<endl;}}
	        
	     else{
	     	if(x>y){
	     		cout<<x<<endl;
			 }
			 else{cout<<y<<endl;
			 }
		 }   
}
	return 0;
}
