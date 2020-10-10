#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        vector<long long int> arr(n);
        map<long long int,long long int> mp;
        for (int i=0;i<n;++i){
            cin >> arr[i];
            long long int res = (k - (arr[i] % k)) % k;
            if (res != 0){
                if (mp.find(res) == mp.end()) mp[res] = 0;
                mp[res]++;
            }
        }
        long long int res = 0;
        for (auto &i:mp){
            // cout << i.first << " " << i.second << endl;
            res = max(res, ((i.second-1) * k) + i.first);
        }
        if (res == 0) cout << res << endl;
        else cout << res + 1 << endl;
    }
}