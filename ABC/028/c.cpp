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

int main(){

    set <int> st;

    const int N = 5;
    int a[N];

    fill(a,a+N,0);

    REP(i,N){
        cin >> a[i];
    }

    REP(i,N){
        FOR(j,i+1,N){
            FOR(k,j+1,N){
                st.insert(a[i]+a[j]+a[k]);
            }
        }
    }

    auto itr = st.end();

    REP(i,3){
        itr--;
    }

    cout << *itr << endl;
    
    return 0;
}
