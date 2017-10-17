#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int a,b,c;
  cin >> a >> b >> c;

  int ans = (a^b)^c;

  cout << ans << endl;
    
  return 0;
}
