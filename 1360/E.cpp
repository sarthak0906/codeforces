#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<vector<char> > v(n, vector<char>(n,0) );
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j) cin >> v[i][j];
    }
    // cout << "done\n";
    for(int i=0;i<n-1;++i){
        for (int j=0;j<n-1;++j){
            if (v[i][j] == '1'){
                if (v[i+1][j] == '1' || v[i][j+1] == '1') continue;
                else {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}