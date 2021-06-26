
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    long long n;cin>>n;
    if(n==3 || n==2){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
    return 0;
}