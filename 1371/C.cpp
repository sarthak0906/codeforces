#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a,b,n,m;
        cin >> a >> b >> n >> m;

        if (a+b < n+m){
            cout << "No\n";
            continue;
        }
        if (min(a,b) < m){
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
    }
}

/*
type 1: choose one greater one
type 2: choose one lesser one
if (a+b < n+m) return false;
if (min(a,b) < m) return false;
*/