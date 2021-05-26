#include<iostream>
using namespace std;
int main(){
	char s[100];
	gets(s);
	for(int i=0;s[i]!='\0';i++){
	//	if(s[i]>'65' && s[i]<'90'){
		if(s[i]==' '){
			continue;
		}
			s[i]=s[i]-32;
		
	}
	puts(s);
	return 0;
}
