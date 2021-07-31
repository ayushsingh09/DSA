//Find the sum of each subArray of the given array.
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
// compexity - O
int sumOfSubArray(int a[], int n){
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum =0;
        for(int j=i;j<n;j++){
            sum += a[j];
            cout<<sum<<endl;
        }
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
    
    sumOfSubArray(arr,n);

   return 0; 
}

















