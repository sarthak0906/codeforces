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
        vector<int> res(n);
        vector<int> zero, one;
        for (int i=0;i<n;++i){
            int newpos = zero.size() + one.size();
            if (a[i] == '0') {
				if (one.empty()) {
					zero.push_back(newpos);
				} else {
					newpos = one.back();
					one.pop_back();
					zero.push_back(newpos);
				}
			} else {
				if (zero.empty()) {
					one.push_back(newpos);
				} else {
					newpos = zero.back();
					zero.pop_back();
					one.push_back(newpos);
				}
			}
			res[i] = newpos;
        }
        cout << zero.size() + one.size() << endl;
		for (auto it : res) cout << it + 1 << " ";
		cout << endl;
    }
}