#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string pre, suf;
        int i = 0,j = s.size()-1;
        while(i != j){
            if (s[i] == s[j]){
                pre = pre + s[i];
                suf = s[i] + suf;
                i++;
                j--;
            }
            else {
                break;
            }
        }
        if (i == j){
            cout << pre + s[i] + suf << endl;
        }
        else {
            s = s.substr(i, j);
            string s1 = s;
            reverse(s1.begin(), s1.end());
            string a = s + "$" + s1;
            vector<int> z(a.size());
            for(int i = 1, l = 0, r = 0; i < (int)a.size(); ++i){
                if(i <= r) z[i] = min(r-i+1, z[i-l]);
                while(z[i] + i < (int)a.size() && a[z[i]] == a[z[i]+i])z[i]++;
                if(i+z[i]-1 > r)l = i, r = z[i]+i-1;
            }
            int pref = 1;
            for(int i = 0; i < s.size(); ++i){
                int lrem = s.size()-i;
                if(z[i] == lrem)pref=max(pref,lrem);
            }
            a = s1 + "$" + s;
            z = vector<int> (a.size());
            for(int i = 1, l = 0, r = 0; i < (int)a.size(); ++i){
                if(i <= r) z[i] = min(r-i+1, z[i-l]);
                while(z[i] + i < (int)a.size() && a[z[i]] == a[z[i]+i])z[i]++;
                if(i+z[i]-1 > r)l = i, r = z[i]+i-1;
            }
            int ans = 1;
            for(int i = 0; i < s.size(); ++i){
                int lrem = s.size()-i;
                if(z[i] == lrem)ans=max(ans,lrem);
            }
            if (ans >= pref){
                cout << pre << s.substr(s.size() - ans, s.size()) << suf << endl;
            }
            else {
                cout << pre << s.substr(0, pref) << suf << endl;
            }
        }
    }
}