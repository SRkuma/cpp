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

double A , B;
int C;

double func(double t){
    
        return  A * t + B * sin(C * t * PI);
}

int main(){
    
    const double ep = 1e-6;
    
    cin >> A >> B >> C;
    
    double left = 0.;
    double right = 1e+9;
    double t = (left+right)/2.;
    
    while(1){
        
        t = (left+right)/2.;
        
        if(func(t) > 100.){
            right = t;
        }else{
            left = t;
        }
        if(fabs(func(t) - 100) <= ep) break;
    }
    
    cout << fixed << setprecision(15) << t << endl;
    return 0;
}
