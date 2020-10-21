#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string original = s;
    reverse(s.begin(), s.end());
    string reversed = s;
    int ret = 0;

    for (int i=0;i<n-1;++i){
        if (original[i] != reversed[i]){
            char target = reversed[i];
            char tmp = original[i+1];
            for (int j=i+1;j<n && original[j] != reversed[i];++j){
                char nt = original[j];
                original[j] = tmp;
                tmp = nt;
            }
            cout << original << endl;
        }
    }
}