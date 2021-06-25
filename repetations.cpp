#include<bits/stdc++.h>

using namespace std;
#define long long ll

int main(){
    string s;
    getline(cin,s);
    int c=1,ma=1;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i-1]){
            c++;
            ma=max(c,ma);
        }
        else{
            ma=max(c,ma);
            c=1;
        }
    }
    cout<<ma<<endl;
}
