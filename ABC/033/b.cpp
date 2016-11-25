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
    
    int n;
    pair <string,int> town[1001];

    cin >> n;
    int ans = 0;
    
    REP(i,n){
        cin >> town[i].first >> town[i].second;
        ans += town[i].second;
    }

    REP(i,n){
        if(ans / 2 < town[i].second){
            cout << town[i].first << endl;
            return 0;
        }
    }
    
    cout << "atcoder" << endl;
    
    return 0;

}
