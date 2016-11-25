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

    double m_hand_ratio = 360 / 60;    //degree per minute(minute)
    double h_hand_ratio = 30.0 / 60.0;     //degree per minute(hour)

    int hour,minute;

    cin >> hour >> minute;
    
    hour %= 12;

    double hhand = hour * 30 + h_hand_ratio * minute;
    double mhand = minute * m_hand_ratio;

    (fabs(mhand-hhand) > 180) ?
        cout << fixed << setprecision(4) << 360 - fabs(mhand-hhand) << endl :
        cout << fixed << setprecision(4) << fabs(mhand-hhand) << endl;
    
    return 0;
}
