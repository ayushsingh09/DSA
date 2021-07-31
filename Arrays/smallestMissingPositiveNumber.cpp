#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int a[n], ans;
    cout<<"Enter elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    const int N = 1e6+2;
    bool check[N];
    for(int i=0;i<n;i++){
        check[i]= false;
    }
    for (int i = 0; i < n; i++)
    {
        check[a[i]] =true;
    }
    for(int i=0;i<n;i++){
        if(check[i]==false){
        ans=i;
        break;
        }
    }
    cout<<"Smallest positive missing value is "<<ans;
    

    return 0;
 }