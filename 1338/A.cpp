#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mx = INT_MIN, ans = 0;
        for (int i=0;i<n;++i){
            int a;
            cin >> a;
            if (a >= mx) mx = a;
            else ans = max(ans, int(log2(mx-a)+1));
        }
        cout << ans << endl;
    }
    return 0;
}