#include<iostream>
#include<string>
using namespace std;
int main()
{
		string str1;
		cin>>str1;
		int n=str1.size();
		for(int i=0;i<n;i++){
			if(str1[i] == '?' ){
				str1[i] = '*' ;
			}
		}
		cout<<str1;
		
		
		//cout<<n<<endl<<str1;
		return 0;
}
