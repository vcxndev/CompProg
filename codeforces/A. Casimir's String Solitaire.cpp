#include<bits/stdc++.h>

using namespace std;

#define NOBOT ios::sync_with_stdio(0); cin.tie(0);

using ll = long long;
using str = string;
using db = long double;

//pairs
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdb = pair<db, db>;

#define mp_ make_pair
#define fi first
#define se second

//vectors
//i dont use them often tho
using vii = vector<int, int>;
using vll = vector<ll, ll>;
using vdb = vector<db, db>;
using vpii = vector<pii>;
using vpdb = vector<pdb>;

#define size(x) (int)(x.size())
#define all(x) x.begin, x.end
#define pb_ push_back

void solve(){
	str s;
	cin>>s;
	bool ex = false;
	
	unsigned int bc = 0;
	
	for(unsigned int i = 0;i<s.length();++i){
		if(s[i] == 'B'){
			bc++;
		}
		else{
			ex = true;
		}
	}
	
	cout<<(bc == (s.length()-bc) && ex ? "YES" : "NO")<<endl;
}
		

int main(){
	NOBOT;
	
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	
}