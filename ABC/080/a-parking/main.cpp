#include <iostream>
#include <math.h>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int n, a, b;
  cin >> n >> a >> b;

  cout << min(n*a, b) << endl;
    
  return 0;
}
