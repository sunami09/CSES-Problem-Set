#include <bits/stdc++.h>
using namespace std;

/*

  1  2  3  4  5
1 1  2  9  10 25
2 4  3  8  11 24
3 5  6  7  12 23
4 16 15 14 13 22
5 17 18 19 20 21


Square of Max(y , x) => is maximum in the L-shape region.

if( max is even) {
    if(y == max){
        print(max^2 - x + 1)
    }else{
        ans(max, max) = max^2 - max + 1;
        ans = ans - (max - y)
    }
}

if(max is  odd){
    if(x == max){
        print(max^2 - y + 1)
    }else{
        ans(max, max) = max^2 - max + 1;
        ans = ans - (max - x);
    }
}

*/

int main()
{
    unsigned long long t;

    cin >> t;

    while(t--){
        unsigned long long y, x;

        cin >> y >> x;

        unsigned long long maX = (y > x) ? y : x;

        unsigned long long maxValue = maX * maX;

        // cout << maxValue << endl;

        if(maX % 2 == 0){
            if(y == maX){
                cout << (maxValue - x + 1) << endl;
            }else{
                unsigned long long ans = maxValue - maX + 1;
                ans = ans - (maX - y);

                cout << ans << endl;
            }
        }else{
            if(x == maX){
                cout << (maxValue - y + 1) << endl;
            }else{
                unsigned long long ans = maxValue - maX + 1;
                ans = ans - (maX - x);

                cout << ans << endl;
            }
        }


    }

    return 0;
}