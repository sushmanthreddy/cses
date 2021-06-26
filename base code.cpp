#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    int pre,i;
    int test =0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(pre>x){
            test+=pre-i;
        }
        else{
            continue;
        }
        
    }
    cout<<test<<endl;
    return 0;
}