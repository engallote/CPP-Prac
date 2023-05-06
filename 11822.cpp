#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <bitset>
#include <cstdlib>
using namespace std;


int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    int arr[N][5];
    int res = 0, r = 0, idx = 0;
    for(int t = 0; t < N; t++)
        for(int i = 0; i < 5; i++) cin >> arr[t][i];
    
    while(r < N) {
        if(arr[r][idx] == 1) {
            r += 1;
        }
        idx += 1;
        if(r < N && idx >= 5) {
            res += 2;
            idx = 0;
        }
        res += 1;
    }
    
    cout << res << endl;
    return 0;
}