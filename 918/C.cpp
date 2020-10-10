#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;++i)
#define rloop(i,a,b) for(int i=a;i>b;i--)
#define vi vector<int>
#define vl vector<long long int>
#define F first
#define S second

using namespace std;

typedef long long int ll;

string s;

void solve(){
    cin >> s;
    ll ans = 0;
    int n=s.size(), cnt=0;
    vector<vi> dp(n, vi(n,0));
    for(int i = 0; i < n; ++i){
        cnt = 0;
        for(int j = i; j < n; ++j){
            if(s[j] != ')')cnt++;
            else cnt--;
            if(cnt < 0){
                for(int k = j; k < n; ++k)dp[i][k] = -1;
                break;
            }
            dp[i][j] = cnt;
        }
    }
    for(int j = n-1; j >= 0; j--){
        cnt = 0;
        for(int i = j; i >= 0; i--){
            if(s[i] != '(')cnt++;
            else cnt--;
            if(cnt < 0)break;
            if(dp[i][j] == -1)continue;
            else if(j-i & 1){
                ans++;
            }
        }
    }
    cout << ans;
}

int main(){
    int t=1;
    // cin >> t;
    while(t--) solve();
    return 0;
}