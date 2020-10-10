#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> f(n+1,0);
        for (int i=0;i<n;++i){
            int a;
            cin >> a;
            f[a] ++;
        }
        int mx = *max_element(f.begin(), f.end());
        int cnt = 0;

        for (auto i:f){
            if (i == mx) cnt++;
        }

        int k = n-cnt*mx;
        cout << (k/(mx-1)) + cnt-1 << endl;
    }
    return 0;
}