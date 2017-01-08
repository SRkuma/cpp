#include <iostream>
#include <stdio.h>       // printf,scanf
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

void printDir(int cnt,char c){
    REP(i,cnt){
        cout << c;
    }
}

int main(void){

    int sx,sy,gx,gy;
    cin >> sx >> sy;
    cin >> gx >> gy;

    int xDiff = gx - sx;
    int yDiff = gy - sy;

    // 1週目
    printDir(xDiff,'R');
    printDir(yDiff,'U');
    printDir(xDiff,'L');
    printDir(yDiff,'D');

    // 2週目 s → g
    cout << "D";
    printDir(xDiff+1,'R');
    printDir(yDiff+1,'U');
    cout << "L";

    // 2週目 g → s
    cout << "U";
    printDir(xDiff+1,'L');
    printDir(yDiff+1,'D');
    cout << "R";
    cout << endl;
    return 0;
}
