#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void subSets(int a[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j))
                cout<<a[j]<<" ";
        }
    cout<<endl;
    }
}

int main(){
    int a[4]= {1,2,3,4};
    subSets(a,4);
return 0;
}