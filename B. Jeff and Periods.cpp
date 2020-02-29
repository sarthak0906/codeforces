#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <int,vector<int> > mp;
    for (int i=0;i<n;++i){
        int a;
        cin>>a;
        if(mp.find(a) == mp.end())mp[a]=vector<int> ();
        mp[a].push_back(i);
//        map.insert(pair<int,int> (a,i));
    }
    map<int,vector<int> >::iterator itr;
    vector <pair<int,int> > ans;
    for (itr = mp.begin();itr != mp.end();++itr){
        if (itr->second.size()==1) ans.push_back(make_pair(itr->first,0));
        else if (itr->second.size()==2) ans.push_back(make_pair(itr->first,itr->second[1] - itr->second[0]));
		else {
	        int flag = 0;
	        for (int i =0;i< itr->second.size()-1;++i){
	            if (itr->second[i+1]-itr->second[i] != itr->second[1]-itr->second[0]){
	            	flag ++;
	                break;
				}
//
//	            }
//	            else {
	        }
	        if (flag==0) ans.push_back(make_pair(itr->first,itr->second[1]-itr->second[0]));
		}
    }
    cout << ans.size() << endl;
    vector <pair<int,int> >::iterator i;
	for (i= ans.begin();i != ans.end();++i) cout << i->first << " " << i->second << endl;
    return 0;
}
