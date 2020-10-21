#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int mx = n;
    cout << 2 << endl;
    while(n > 1){
        n--;
        cout << n << " " << mx << endl;
        mx += n;
        mx = (mx%2) ? mx/2 + 1 : mx/2;
        // cout << mx << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}