#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int n;
  cin >> n;
  int F[n][10];
  int P[n][11];
  
  REP(i,n){
    REP(k,10){
      cin >> F[i][k];
    }
  } 
  REP(i,n){
    REP(k,11){
      cin >> P[i][k];
    }
  }

  ll ans = INT64_MIN;

  FOR(k,1,1<<10){
    ll res = 0;
    REP(i,n){
      int cnt = 0;
      REP(j,10){
        if((k>>j&1) && F[i][j]) cnt++;
      }
      res += P[i][cnt];
    }
    ans = max(ans,res);
  }

  cout << ans << endl;

  return 0;
}
