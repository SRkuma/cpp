#include <iostream>
typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int n,m;
  cin >> n >> m;

  int constTime = (n-m) * 100;
  int rndTime = m * 1900;

  int ans = (constTime + rndTime) * (2 << (m-1));

  cout << ans << endl;

  return 0;
}
