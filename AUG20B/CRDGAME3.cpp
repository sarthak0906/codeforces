#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int vala, valb;
        vala = (a%9 == 0) ? a/9 : (a/9) + 1;
        valb = (b%9 == 0) ? b/9 : (b/9) + 1;
        if (vala < valb) cout << 0 << " " << vala << endl;
        else cout << 1 << " " << valb << endl;
    }
    return 0;
}