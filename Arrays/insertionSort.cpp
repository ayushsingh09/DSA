#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
// compexity - O
int insertionSort(int a[], int n){

    for(int i=1; i<n;i++){
        int current = a[i];
        int j = i-1;
        while(a[j]>current && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
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
    
    cout<<insertionSort(arr,n);
    
}