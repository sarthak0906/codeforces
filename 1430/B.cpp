#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    long long int ans = 0;
    for (int i=0;i<k+1;++i) ans += a[i];
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}