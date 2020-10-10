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
        // int l = 0, r = n - 1;
		// int suml = 0, sumr = 0;
		// int cnt = 0, ansl = 0, ansr = 0;
		// while (l <= r) {
		// 	if (cnt % 2 == 0) {
		// 		int nsuml = 0;
		// 		while (l <= r && nsuml <= sumr) {
		// 			nsuml += arr[l++];
		// 		}
		// 		ansl += nsuml;
		// 		suml = nsuml;
		// 	} else {
		// 		int nsumr = 0;
		// 		while (l <= r && nsumr <= suml) {
		// 			nsumr += arr[r--];
		// 		}
		// 		ansr += nsumr;
		// 		sumr = nsumr;
		// 	}
		// 	++cnt;
		// }
		// cout << cnt << " " << ansl << " " << ansr << endl;
        int l = 0, r = n-1;
        int ans = 0;
        int lsum = 0, rsum = 0;
        int currsum = 0;
        while(l <= r){
            if (ans%2 == 0){
                int sum = 0;
                while(l <= r && sum <= currsum){
                    sum += arr[l++];
                }
                lsum += sum;
                currsum = sum;
            }
            else {
                int sum = 0;
                while(l <= r && sum <= currsum) sum += arr[r--];
                rsum += sum;
                currsum = sum;
            }
            ans++;
        }
        cout << ans << " " << lsum << " " << rsum << endl;
    }
}