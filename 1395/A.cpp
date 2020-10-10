#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a%2 + b%2 + c%2 + d%2 <= 1){
        cout << "Yes\n";
        return;
    }
    if (a && b && c){
        a--;
        b--;
        c--;
        d++;
        if (a%2 + b%2 + c%2 + d%2 <= 1){
            cout << "Yes\n";
            return;
        }
        cout << "No\n";
        return;
    }
    cout << "No\n";
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}

/*
5 5 5 5
4 4 4 8

5 1 3 a
4 0 2 a+3

5 2 3 a
4 1 2 a+3

4 1 2 a


5 5 5 4
4 4 4 7

*/