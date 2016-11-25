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

double r[1000];

double ans;

void calc(int N,bool is_even){
    
    REP(i,N){
        double area = r[i] * r[i] * PI;

        if(is_even){
            (i % 2 == 0) ? ans += area : ans -= area;
        }else{
            (i % 2 == 0) ? ans -= area : ans += area;
        }
    }
}


int main(){

    int N;
    cin >> N;
    
    REP(i,N){
        cin >> r[i];
    }

    sort(r,r+N);

    calc(N,N % 2);

    cout << fixed << setprecision(7) << ans << endl;
    

    return 0;
}
