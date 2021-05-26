#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int *p[3];
	p[0]=new int[3];
	p[1]=new int[3];
	p[2]=new int[3];
	
	
	//int p[n][m];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>p[i][j];
		}
		//cin>>p[i];
		//cout<<p[i]<<' ';
	}
	
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<p[i][j]<<' ';
			}
			cout<<endl;
		//cin>>p[i];
		
		//cout<<p[i]<<' ';
	}
	return 0;
}
