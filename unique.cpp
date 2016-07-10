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
#include <bits/stdc++.h> //include all
#define PI 3.141592653589793238462643383279
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;


int main(void){

    vector<int>v;

    v.pb(1);
    v.pb(1);
    v.pb(3);
    v.pb(5);
    v.pb(5);
    v.pb(4);

    REP(i,v.size()){
        cout << v[i] << endl;
    }
    
    v.erase(unique(v.begin(),v.end()),v.end());

    cout << "unique" << endl;

    REP(i,v.size()){
        cout << v[i] << endl;
    }
    
    return 0;
}
