#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a;
        cin >> a;
        bool ret = true;
        for (int i=1;i<n;++i){
            int b;
            cin >> b;
            if (a != b) ret = false;
        }
        if (ret) cout << n << endl;
        else cout << 1 << endl;
    }
    return 0;
}