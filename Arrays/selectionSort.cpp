#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
// compexity - O(n^2)
int selectionSort(int a[], int n){
    
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;            }
        }
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
    
    cout<<selectionSort(arr,n);
    
}