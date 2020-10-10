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
        string ans;
        for (int i=0;i<s.size();i+=2) ans += s[i];
        cout << ans << endl;
    }
    return 0;
}