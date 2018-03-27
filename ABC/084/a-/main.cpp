#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int h;
  int hPerDay = 24;
  cin >> h;
  int rest = hPerDay -h;
  cout << hPerDay + rest << endl;
    
  return 0;
}
