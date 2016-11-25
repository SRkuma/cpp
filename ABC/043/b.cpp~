#include <iostream>
#include <stdio.h>       // printf,scanf
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>  //sort,binarySearch
#include <functional> 
#include <iomanip> // setprecision
#include <utility>    // c+11 Array
#include <set>
#include <sstream>
#include <bits/stdc++.h>
#define PI 3.141592653589793238462643383279
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;

int main(void){

    string str;
    string ans = "";

    cin >> str;

    REP(i,str.size()){
        if(str[i] == '0') ans += '0';
        if(str[i] == '1') ans += '1';
        if(str[i] == 'B') ans = ans.substr(0,ans.size()-2);
        cout << ans << endl;
    }
    return 0;
}
