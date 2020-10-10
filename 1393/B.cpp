#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    map<int, int> m;
    int m2=0,m4=0;
    for (int i=0;i<n;++i){
        int a;
        cin >> a;
        if (m.find(a) == m.end()){
            m.insert(make_pair(a,0));
        }
        m2 -= m[a] / 2;
        m4 -= m[a] / 4;
        m[a]++;
        m2 += m[a] / 2;
        m4 += m[a] / 4;
    }
    int q;
    cin >> q;
    while(q--){
        char s;
        int a;
        cin >> s >> a;
        if (s == '+'){
            if (m.find(a) == m.end()){
                m.insert(make_pair(a,0));
            }
            m2 -= m[a]/2;
            m4 -= m[a]/4;
            m[a]++;
            m2 += m[a]/2;
            m4 += m[a]/4;
        }
        else {
            m2 -= m[a]/2;
            m4 -= m[a]/4;
            m[a]--;
            m2 += m[a]/2;
            m4 += m[a]/4;
        }
        if (m2 > 3 && m4 > 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}