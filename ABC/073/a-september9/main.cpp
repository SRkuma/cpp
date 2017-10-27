#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int n;
  cin >> n;
  if(n / 10 == 9 || n % 10 == 9){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
    
  return 0;
}
