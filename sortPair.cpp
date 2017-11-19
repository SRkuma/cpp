#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#define debug(x) cout << #x << " = " << x << endl
using namespace std;

int main(void){

    vector <pair <int,int> > p;

    for(int i = 0;i<5;++i){
        p.push_back(make_pair(i % 3 * 4,i));
        printf("%d:%d\n",p[i].first,p[i].second);
    }
    printf("単純にソート\n");

    //降順ソート
    sort(p.begin(),p.end(),greater<pair<int,int> >());
    
    for(int i = 0;i<5;++i){
        printf("%d:%d\n",p[i].first,p[i].second);
    }
    //第二要素順にソート(c++11~)
    
    printf("第二要素順にソート\n");
    sort(p.begin(),p.end(),
         [](const pair<int,int> &left, const pair<int,int> &right) {
             return left.second > right.second;});
    for(int i = 0;i<5;++i){
        printf("%d:%d\n",p[i].first,p[i].second);
    }

    return 0;
}
