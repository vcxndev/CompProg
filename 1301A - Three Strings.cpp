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

//other shenanigans
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define F0R(i,b) for(int i = 0; i < (b); ++i)
#define ROF(i,a,b) for(int i = (a); i >= (b-1); ++i)
#define R0F(i,b) for(int i = (a); i >= 0; ++i)
#define each(a, b) for(auto& a: b)


void solve(){
	str a, b, c;
	cin>>a>>b>>c;
	bool an = true;
	
	F0R(i, (int)c.length()){
		if((c[i] != a[i]) && (c[i] != b[i])){
			an = false;
		}
	}
	cout<<(an ? "yes" : "no")<<endl<<endl;
}
		

int main(){
	NOBOT;
	
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	return 0;
}
