#include<iostream>
using namespace std;

/*void fun(int n){
	if(n>0){
		fun(n-1);
		cout<<n<<' ';
	}
}

int main()
{
	int n;
	cin>>n;
	fun(n);
	return 0;
	}*/
int sum=0;	
int fun(int n){
	if(n>0){
		sum=sum+n;
		fun(n-1);
		return sum;
		//cout<<n<<' ';
	}
}

int main()
{
	int n;
	cin>>n;
	//int sum=0;
	cout<<fun(n)<<' ';
	return 0;
	}
