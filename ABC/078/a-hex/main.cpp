#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  char a,b;
  cin >> a >> b;

  if(a > b){
    cout << ">" << endl;
  }else if(a < b){
    cout << "<" << endl;
  }else{
    cout << "=" << endl;
  }
    
  return 0;
}
