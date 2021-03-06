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

    string str;

    cin >> str;

    int a[6] = {};

    REP(i,str.size()){

        switch(str[i]){
        case 'A' : a[0]++; break;
        case 'B' : a[1]++; break;
        case 'C' : a[2]++; break;
        case 'D' : a[3]++; break;
        case 'E' : a[4]++; break;
        case 'F' : a[5]++; break;
        }
    }

    REP(i,6){
        if(i) cout << " ";
        cout << a[i];
    }
    cout << endl;
    
    return 0;
}
