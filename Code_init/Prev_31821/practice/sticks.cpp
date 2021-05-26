/*
#include<iostream>
using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		bubbleSort(arr,n);
		int m=arr[n-1];
		int arr2[m+1]={0};
		for(int i=0;i<n;i++){
			arr2[arr[i]]++;
		}
		int num=1,c=0;
		for(int i=m;i<0;i--){
			if(c==2){
				break;
			}
			if(arr2[i] >= 2){
				c++;
				num=num*i;
			}
		}
		if(c==2){
			cout<<num<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
*/

/*

#include<iostream>
using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int num=1,count=0,prev=0;
		bubbleSort(arr,n);
		for(int i=n-1;i>0;i--){
			if(count == 2){
				break;
			}
			if(arr[i]==arr[i-1]){
				if(arr[i] != prev){
					num=num*arr[i];
					count++;
					prev=arr[i];
				}
			}
		}
		if(count==2){
			cout<<num<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}

*/

/*

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int cnt[1010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < 1010; i++){
            cnt[i] = 0;
        }
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        int mx = 0, sec;
        for(int i = 0; i < 1010; i++){
            if(cnt[i] >= 4){
                sec = i;
                mx = i;
            }
            if(cnt[i] >= 2){
                sec = mx;
                mx = i;
            }
        }
        if((sec*mx) > 0){
            cout << sec*mx << endl;
        }
        else{
            cout << "-1\n";
        }


    }

    return 0;
}
*/
