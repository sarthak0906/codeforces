#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        vector<int> arr(n+1);
        arr[0] = 0;
        long long int res = 0;
        map<int, int> mp;
        mp[0] = 1;
        for (int i=1;i<=n;++i){
            arr[i] = arr[i-1] + (a[i-1] - '0');
            if(mp.find(arr[i] - i - 1) == mp.end()) mp[arr[i] - i - 1] = 0;
            mp[arr[i] - i - 1]++;
        }
        for (auto i:mp){
            res += (i.second * (i.second-1))/2;
        }
        cout << res << endl;
    }
    return 0;
}