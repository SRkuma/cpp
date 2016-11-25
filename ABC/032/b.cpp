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
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;


int main(void){

    string s;

    set <string> passSet;
    int n;

    cin >> s >> n;

    if(n == 0){
        cout << 0 << endl;
        return 0;
    }

    int castSize = s.size();

    for(int i = 0; i<= castSize - n; i++){
        passSet.insert(s.substr(i,n));
    }

    cout << passSet.size() << endl;
    
    return 0;
}
