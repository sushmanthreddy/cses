#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    lli n;
    cin >> n;
    lli arr[n];
    for (lli i = 0; i < n; i++)
        cin >> arr[i];
    lli total = 0, m = arr[0];
    for (lli i = 1; i < n; i++)
    {
        total += max(0LL, m - arr[i]);
        m = max(m, arr[i]);
    }
    cout << total;
    return 0;
}