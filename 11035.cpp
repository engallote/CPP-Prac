#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <cmath>
#include <bitset>
#include <cstdlib>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    while(cin >> N >> K) {
        bool chk[N + 1];
        int arr[N + 1];
        fill_n(chk, N + 1, false);
        fill_n(arr, N + 1, -1);

        chk[0] = true;
        chk[1] = true;
        int idx = 1;

        for(int i = 2; i <= N; i++) {
            if(chk[i]) continue;
            arr[idx] = i;
            idx += 1;
            for(int j = i + i; j <= N; j+=i) {
                if(chk[j]) continue;
                chk[j] = true;
                arr[idx] = j;
                idx += 1;
            }
        }

        cout << arr[K] << endl;
    }

    return 0;
}