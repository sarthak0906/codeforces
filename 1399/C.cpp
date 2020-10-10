#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        for (int i=0;i<n;++i){
            int x;
            cin >> x;
            a[x]++;
        }
        int ans = 0;
		for (int s = 2; s <= 2 * n; ++s) {
			int cur = 0;
			for (int i = 1; i < (s + 1) / 2; ++i) {
				if (s - i > n) continue;
				cur += min(a[i], a[s - i]);
			}
			if (s % 2 == 0) cur += a[s / 2] / 2;
			ans = max(ans, cur);
		}
		cout << ans << endl;
    }
}