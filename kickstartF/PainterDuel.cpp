#include<bits/stdc++.h>

using namespace std;

void solve(){
    int s,ra,pa,rb,pb,c;
    cin >> s >> ra >> pa >> rb >> pb >> c;
    int ret = -1;
    if (c == 2){
        int a,b;
        cin >> a >> b;
        cin >> a >> b;
        cout << 0 << endl;
        return;
    }
    else if (c == 1){
        int a,b;
        cin >> a >> b;
        if (ra == 2 && pa == 2){
            cout << 1;
            return;
        }
        if (rb == 2 && pb == 2){
            cout << -1;
            return;
        }
        else {
            if (a == 2 && b == 2){
                cout << 0 ;
                return;
            }
            else {
                cout << 1;
                return;
            }
        }
    }
    else {
        if (ra == 2 && pa == 2){
            cout << 1;
            return;
        }
        if (rb == 2 && pb == 2){
            cout << -1;
            return;
        }
        else {
            {
                cout << 2;
                return;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;++i){
        cout << " Case #" << i+1 << ": ";
        solve();
    }
}