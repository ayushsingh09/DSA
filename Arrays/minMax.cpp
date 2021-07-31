#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<climits>
using namespace std;
int main(){
    
    int m;
    cout<<"Enter the size"<<endl;
    cin>>m;
    int a[m];
    cout<<"Enter the numbers in array"<<endl;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int minNo = a[0];
    int maxNo = a[0];
    for(int i=0;i<m;i++){
        if(a[i]<minNo)
            minNo = a[i];
        if(a[i]>maxNo)
            maxNo = a[i];
    }
    cout<<"The max element is "<<maxNo;
    cout<<"The min element is "<<minNo;

 return 0;
}