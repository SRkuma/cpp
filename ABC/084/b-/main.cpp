#include <iostream>
#include <ctype.h>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int A, B;
  cin >> A >> B;
  int len = A;
  string str;
  cin >> str;

  REP(i,(int)str.size()){
    if(i == len){
      if(str[i] != '-'){
        cout << "No" << endl;
        return 0;
      }
    }else{
      if(!isdigit(str[i])){
        cout << "No" << endl;
        return 0; 
      }
    }
  }

  cout << "Yes" << endl;
    
  return 0;
}
