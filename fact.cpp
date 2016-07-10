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

void fac(int rest, string s){
    
    if(rest == 0){
        
        cout << s << endl;
        
    }else{
        
        for(char c = 'a'; c <= 'c'; c++){
            fac(rest-1,s+c);
        }
        
    }
}

int main(void){

	int n;
    cin >> n;

    fac(n,"");
    return 0;
}
