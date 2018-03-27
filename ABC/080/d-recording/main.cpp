#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int n;
  cin >> n;
  int start[n], end[n], channel[n];

  REP(i,n){
    cin >> start[i] >> end[i] >> channel[i];
  }
  
  return 0;
}
