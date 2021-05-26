/*
#include<iostream>
using namespace std;
int c1=0,c2=0;

int binarys(int arr[],int a)
{
	int key=a;
	int l=0,h=12;
	int mid;
	int low;
	//cin>>key;
	//for(int i=0;i<10;i++)
	while(l<=h){
		mid=(l+h)/2;
		if(key==arr[mid]){
			cout<<"found the no "<<arr[mid];
			c1++;
			break;
			return mid;
			}
		else if(key<arr[mid]) {h=mid-1;
		}
		else{
		low=l;
		l=mid+1;
		}
}
	//cout<<"not found";
	c2++;
	return low;

}

int main(){
	int arr[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	int n;
	cin>>n;
	int sum=0;
	//loop for n test cases
	for(int i=0;i<n;i++){
		c1=c2=0;
		int a;
		int x=0;
		cin>>a;//read the first word
		while(a!=0)
		{
			x=binarys(arr,a);//binary search call, with key
			a=a-x;
		}
		sum=c1+c2;
		cout<<sum<<endl;
		
	}
	return 0;
}


*/





#include<iostream>
//#include<fstream>
#include<cmath>
using namespace std;
int main()
{	
	int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
            int N;
            cin>>N;
            int Ans =0;
            for(int k=11;k>=0;k--)
            {
                    int p = (int)pow(2.0,(double)k);
                    if(N - p >= 0)
                    {
                         N = N - p;
                         k++;
                         Ans = Ans +1;
                    }
            }
            cout<<Ans<<endl;            
			}
    return 0;
}   
