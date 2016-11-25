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

    int N;
    int lower,upper;


    cin >> N >> lower >> upper;

    string direction;
    int meter;

    int loc = 0;

    REP(i,N){
        cin >> direction >> meter;

        if(meter < lower){
            meter = lower;
        }else if(meter > upper){
            meter = upper;
        }

        if(direction == "East"){
            loc += meter;
        }else{
            loc -= meter;
        }
    }

    if(loc < 0){
        cout << "West" << " " << -loc << endl;
    }else if(loc > 0){
        cout << "East" << " " << loc << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}
