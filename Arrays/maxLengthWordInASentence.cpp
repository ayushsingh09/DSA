#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();

    char a[n+1];

    cin.getline(a,n);
    cin.ignore();
    
    int currLength=0 , maxLength=0;
    int i=0;

    while(1){ 
        if(a[i]==' ' || a[i]== '\0'){
            if(currLength>maxLength)
                maxLength=currLength;
            currLength=0;
        }
        else
            currLength++;
        if(a[i]=='\0')
            break;
        i++;
    }
    cout<<maxLength;

  return 0;
}