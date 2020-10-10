#include<bits/stdc++.h>

using namespace std;

int solve(string s, char a){
    if (s.size() == 1){
        return s[0] != a;
    }
    int mid = s.size()/2;
    int c1 = solve(s.substr(0,mid), a+1);
    c1 += s.size()/2 - count(s.begin() + mid, s.end(), a);
    int c2 = solve(s.substr(mid, s.size()), a+1);
    c2 += s.size()/2 - count(s.begin(), s.begin() + mid, a);
    return min(c1, c2);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n ;
        cin >> s;
        cout << solve(s, 'a') << endl;
    }
}