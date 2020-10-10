#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i=0;i<n;++i) cin >> arr[i];
        long long int res = 0;
        for(int i=0;i<n-1;++i){
            res += max(arr[i] - arr[i+1], 0);
        }
        cout << res << endl;
    }
    return 0;
}