#include <iostream>
#include <vector>
#include <set>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  string str;
  string hint;

  cin >> str >> hint;

  int ind = str.size()-hint.size();

  vector<string> vec;
  REP(i,ind+1){
    string tmp = str.substr(i,hint.size());
    bool flag = true;
    REP(j,(int)hint.size()){
      if(tmp[j] != '?' && tmp[j] != hint[j]){
        flag = false;
        break;
      }
    }
    if(flag){
      string candidate = str.substr(0,i) + hint;
      if(hint.size()+ind <= str.size()){
        candidate += str.substr(i+hint.size(),ind-i);
      }
      //cout << candidate << endl;
      vec.push_back(candidate);
    }
  }

  set<string> st;

  REP(i,(int)vec.size()){
    REP(j,(int)vec[i].size()){
      if(vec[i][j] == '?'){
        vec[i][j] = 'a';
      }
    }
    st.insert(vec[i]);
  }

  if((int)hint.size() == 1){
    REP(i,(int)str.size()){
      if(str[i] == hint[0]){
        auto itr = st.begin();
        ++itr;
        cout << *itr << endl;
        return 0;
      }
    }
  }


  if(!st.empty()){
    cout << *st.begin() << endl;
  }else{
    cout << "UNRESTORABLE" << endl;
  }  
  return 0;
}
