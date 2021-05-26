#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    char str[n+2];
	    scanf("%s",str);
	    int r=count(str,str+n,'R');
	    int g=count(str,str+n,'G');
	    int b=count(str,str+n,'B');
	    if(r>b && r>g)
	    {
	        cout << g+b<<endl;
	    }
	    else if(b>r && b>g)
	    {
	        cout << r+g << endl;
	    }
	    else if(g>b && g>r)
	    {
	        cout << b+r << endl;
	    }
	    else if(r==g && r==b)
	    {
	        cout << r+b << endl;
	    }
	    else
	    {
	        if(r==b)
	            printf("%d\n",b+g);
	        else if(b==g)
	            printf("%d\n",b+r);
	        else
	            printf("%d\n",g+b);
	    }
	}
	return 0;
}

