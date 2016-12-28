#include <iostream>
#include <numeric>

using namespace std;

int main(void){

    // 1次元imos
    // 指定された範囲に加算命令を数回行う。
    // その後、指定された範囲の和を求める。
    
    const int N = 5;

    /*
     初期状態
     | 0| 0| 0| 0| 0| 
    */
    int a[N+1];
    fill(&a[0],&a[N+1],0);
    /*
     範囲[x,y]に対しての加算。a[x]のみ加算,a[y]+1を減算
       例) [1,3] +5
             | 5| 0| 0|-5| 0|
           [2,4] -2
             | 5|-2| 0|-5| 2|
           [1,5] +1
             | 6|-2| 0|-5| 2| (-1|)
    */
    a[1] +=  5;
    a[4] -=  5;
    a[2] += -2;
    a[5] -= -2;
    a[1] +=  1;
    //a[6] -=  1; outOfBoundsなら減算は無視して良い

    // for(int i = 1; i <= N;i++){
    //     cout << a[i] << " ";
    //     if(i == N) cout << "\n";
    // }

    /*
      累積和を求める
       | 6| 4| 4|-1| 1|
    */
    // partial_sum(x,y,a[])の範囲がx <= index < y であることに注意
    partial_sum(&a[0],&a[6],&a[0]);
    
    for(int i = 1; i <= N;i++){
        cout << a[i] << " ";
        if(i == N) cout << "\n";
    }
    /*
      指定範囲の和を求める
      partial_sumと同様に範囲は[x,y)
    */
    // [1,5] => 14
    cout << accumulate(&a[1],&a[6],0) << endl;
    // [3,4] =>  3
    cout << accumulate(&a[3],&a[5],0) << endl;
    // [1,1] =>  6
    cout << accumulate(&a[1],&a[2],0) << endl;
    
    return 0;
}
