#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
using namespace std;
vector<string> split(string& input, char delimiter)
{
  istringstream stream(input);

  string field;
  vector<string> result;
  while (getline(stream, field, delimiter)) {
    result.push_back(field);
  }
  return result;
}

int main(void){

  string input;
  cin >> input;
  vector <string> vec = split (input,',');
  REP(i,vec.size()){
    cout << vec[i] << endl;
  }
  return 0;
}
