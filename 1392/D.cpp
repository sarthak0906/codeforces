#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        int ans = 0;
        int cnt = 0;
        while(s.size() && s[0] == s.back()){
            cnt++;
            s.pop_back();
        }
        if (s.empty()){
            if (cnt <= 2) cout << "0\n";
            else cout << int((cnt+2)/3) << endl;
        }
        else {
            s.push_back('$');
            for (int i=0;i+1<s.size();++i){
                cnt++;
                if (s[i] != s[i+1]){
                    ans += cnt/3;
                    cnt = 0;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}