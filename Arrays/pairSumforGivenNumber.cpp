//FIND A PAIR IN THE GIVEN ARRAY WHICH EQUAL TO 'K'.
//APPROACH - SORT THE ARRAY.
//TAKE LOW AND HIGH
//INCREASE LOW IF SUM<K.
//DECREASE HIGH IF SUM>K
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<climits>
using namespace std;
bool pairSum(int a[], int n, int k){

    int low =0;
    int high = n-1;
    while(low<high){
        if(a[low]+a[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low]+a[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}


int main(){
    int a[]= {2,4,7,11,14,16,20,21};
    // cout<<"Enter size"<<endl;
    // cin>>n;
    // int a[n];
    // cout<<"Enter elements "<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    cout<<pairSum(a,8,k);
return 0;
}


