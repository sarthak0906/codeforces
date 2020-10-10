#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a;
        cin >> b;
        int mp[26] = {0};
        for (auto i:a){
            mp[i-'a']++;
        }
        for (auto i:b){
            mp[i-'a']--;
        }
        bool pattern = false;
        for (int i=0;i<26;++i){
            if (i > (b[0] - 'a') && !pattern){
                cout << b ;
                pattern = true;
            }
            if (i == b[0] - 'a'){
                for (auto k:b){
                    if (i == k - 'a') continue;
                    if (i < k - 'a') break;
                    if (i > k - 'a'){
                        cout << b;
                        pattern = true;
                        break;
                    }
                }
            }
            for (int j=0;j<mp[i];++j) cout << char('a'+i);
        }
        cout << endl;
    }
}

/*
da
addafgaed
aaddaefg
aadadefg
*/