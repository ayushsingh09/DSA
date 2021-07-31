#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
// compexity - O(n^2)
int bubbleSort(int a[], int n){
    
   int pass=1;
   int temp;
   while(pass < n){
       for(int i = 0; i< n-pass;i++){
           if(a[i]>a[i+1]){
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
           }
       }
       pass++;
   }
    cout<<"Sorted elements are: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
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
    
    bubbleSort(arr,n);
    return 0;
}