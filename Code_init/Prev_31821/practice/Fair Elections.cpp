#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,cnt=0;
		cin>>n>>m;
		int an=n,am=m;
		long long int sun=0,sum=0;
		int arrn[n],arrm[m];
		
		for(int i=0;i<n;i++){
			cin>>arrn[i];
			sun += arrn[i];
		}
		
		for(int i=0;i<m;i++){
			cin>>arrm[i];
			sum += arrm[i];
		}
		
		if(sun > sum){
			cout<<cnt<<endl;
			continue;
		}
		
		else{
			
			while(sun <= sum && an && am){
				sort(arrn,arrn+n);
				sort(arrm,arrm+m);
				int i=0,j=m-1;
			//	sort(arrm,arrm+m);
				sun -= arrn[i];
				sun += arrm[j];
				sum -= arrm[j];
				sum += arrn[i];
		//		swap(arrn[i],arrm[j]);
				i++,j--,an--,am--,cnt++;
			}
			
			if(sun > sum){
				cout<<cnt<<endl;
			}
			
			else{
				cout << "-1" << endl;
			}
		}
	}
	return 0;
}


