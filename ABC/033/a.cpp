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

    string str;

    cin >> str;

    char tmp = str[0];
    bool is_same = true;

    FOR(i,1,str.size()){

        bool judge = (tmp == str[i]);
        is_same = is_same && judge;
        
    }

    if(is_same){
        cout << "SAME" << endl;
    }else{
        cout << "DIFFERENT" << endl;
    }

    return 0;
}
