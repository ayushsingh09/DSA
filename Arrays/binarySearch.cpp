#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
// compexity - O(log n)
int binarySearch(int arr[], int n, int key){
    
    int low = 0;
    int high = n;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            high = mid-1;
        }
        else 
            low = mid+1;
    }
    return -1;
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
    int key;
    cout<<"Enter the number to be searched"<<endl;
    cin>>key;
    
    cout<<binarySearch(arr,n,key);
    
}