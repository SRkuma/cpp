#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  string str;
  cin >> str;

  if((str[0] == str[1] && str[1] == str[2]) || (str[1] == str[2] && str[2] == str[3])){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
