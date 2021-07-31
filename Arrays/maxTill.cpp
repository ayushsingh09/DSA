//This program prints the max till the 'i'th element.
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int Max(int a[], int n){
    int mx = -199999999;
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
        cout<<mx <<endl;
    }
return 0;
}
int main(){
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements for array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    Max(arr,n);

   return 0; 
}