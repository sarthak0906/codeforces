#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int o=0, c=0;
        int res = 0;
        for (int i=0;i<n;++i){
            if (s[i] == '(')o++;
            if (s[i] == ')'){
                c++;
                if (c > o){
                    res++;
                    c--;
                }
            }
        }
        cout << res << endl;
    }
}