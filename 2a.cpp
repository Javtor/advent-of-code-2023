#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll,ll> ii;

#define pb push_back
#define fst first
#define snd second
#define ALL(cont) cont.begin(), cont.end()
#define mset(a,b) memset(a,b,sizeof(a));
#define fore(i, a, b) for (int i = a, almo5t = b; i < almo5t; ++i)
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(){
  string a = "";
  ll ans = 0;
  while(cin>>a){
    string ids;cin>>ids;
    int id = stoi(ids.substr(0,SZ(ids)-1));
    bool can = true;
    while(true){
      int n;cin>>n;
      string who;cin>>who;
      bool cont = who[SZ(who)-1] == ','||who[SZ(who)-1] == ';';
      

      if(cont) who = who.substr(0,SZ(who)-1);

      can = can &&(
        (who=="red" && n<=12)
        ||(who=="green" && n<=13)
        ||(who=="blue" && n<=14)
      );

      if(!cont)break;
    }
    if(can) ans += id;
  }
  cout<<ans;
}

int main(){FIN;
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}