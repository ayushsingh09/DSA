#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of aray";
    cin>>n;
    int a[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pd = a[1]-a[0];
    int ans =2;
    int curr = 2;

    for(int i=2;i<n;i++){
        if(pd==a[i]-a[i-1]){
            curr++;
        }
        else {
            curr = 2;
            pd = a[i]-a[i-1];
        }
        ans = max(ans, curr);
        cout<<ans<<endl;
    }
    return 0;
}