#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int p;
        int h;
        cin >> h >> p;
        if (2*p < h){
            cout << 0 << endl;
        }
        else{
            while(p > 0 && h > 0){
                h -= p;
                p /= 2;
            }
            if (h <= 0) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}
// 32 16 8 4 2 1
// 6 3 1
// 31 15 7 3 1
// 8 4 2 1
// 9 4 2 1