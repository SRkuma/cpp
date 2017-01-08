#include <iostream>
#include <stdio.h>       // printf,scanf
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>  //sort,binarySearch
#include <functional> 
#include <iomanip>    // setprecision
#include <utility>    // c+11 Array
#include <set>
#include <sstream>
#include <map>
#include <bits/stdc++.h>
#define MOD 1000000007
#define PI 3.141592653589793238462643383279
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define DFOR(i,a,b) for(int i=(a);i>=(b);--i)
#define DREP(i,n)  DFOR(i,n,0)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;
vector<string> split(string& input, char delimiter)
{
  istringstream stream(input);

  string field;
  vector<string> result;
  while (getline(stream, field, delimiter)) {
      if(field != "")
          result.push_back(field);
  }
  return result;
}

int main(){

    string str;

    cin >> str;
    string rev = "";
    DREP(i,str.size()-1){
        rev += str[i];
    }
    
    int cnt = 0;
    while(cnt < str.size()-1){
        string d =  (str.size() >= cnt+5) ? rev.substr(cnt,5): "";
        string er = (str.size() >= cnt+6) ? rev.substr(cnt,6): "";
        string de = (str.size() >= cnt+7) ? rev.substr(cnt,7): "";
        if(d == "maerd" || d == "esare"){
            cnt += 5;
        }else if(er == "resare"){
            cnt += 6;
        }else if(de == "remaerd"){
            cnt += 7;
        }else{
            cout << "NO" << endl;
            return 0;
        }
        //debug(cnt)
    }
    cout << "YES" << endl;
    return 0;
}
