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

    int E, L, B;
    cin >> E >> L >> B;

    int arr[E + 1] = {0};

    int res = 0, num = 0;
    for(int i = 0; i < B; i++) {
        cin >> num;
        arr[num] = 1;
    }

    int pre = 0, idx = 0;
    while(pre < E) {
        if(pre + L <= E) {
            if(arr[pre + L] == 0) {
                pre += L;
                res += 1;
            }
            else {
                int l = L;
                while(l >= 0 && arr[pre + l] != 0) l -= 1;
                pre += l;
                res += 1;
            }
        }
        else {
            res += 1;
            break;
        }
    }


    cout << res << endl;

    return 0;
}