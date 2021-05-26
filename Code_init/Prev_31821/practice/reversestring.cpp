#include<iostream>
using namespace std;
int main(){
	char s[100],a[100];
	gets(s);
	int l=0;
	for(int i=0;s[i]!='\0';i++){
		l++;
	}
		l--;
	cout<<"length is "<<l<<endl;
		for(int i=0;s[i]!='\0';i++){
			a[l]=s[i];
			l--;
	}
	
	//puts(s);
	for(int i=0;s[i]!='\0';i++){
		s[i]=a[i];
	}
	
	for(int i=0;s[i]!='\0';i++){
		cout<<s[i];
	}
	return 0;
}
