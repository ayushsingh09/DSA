#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of aray"<<endl;
    cin>>n;
    int a[n+1];
    a[n]= -1;
    cout<<"enter the elements for no. of people coming each day"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    // 2 4 6 4 
    int noofrecord = 0;
    int mx = -1;

    for(int i=0;i<n;i++){
        if(a[i]> mx && a[i]> a[i+1]){
            noofrecord++; 
        }
        mx = max(mx, a[i]); 
    }
    cout<<"Record breaking day = "<<noofrecord<<endl;
    

    return 0;
}

