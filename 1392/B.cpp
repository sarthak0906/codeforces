#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i=0;i<n;++i) cin >> arr[i];
        if(k > 1) {
			k = 2 + k % 2;
		}
        while(k--){
            int d = *max_element(arr.begin(), arr.end());
            for (int i=0;i<n;++i) arr[i] = d - arr[i];
        }
        for (auto i:arr) cout << i << " ";
        cout << endl;
    }
    return 0;
}