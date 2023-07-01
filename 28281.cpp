#include <iostream>
#include <sstream>
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
    
    int N, X;
    cin >> N >> X;

    int pre = 0, num = 0, res = 2000000000;
    for(int i = 0; i < N; i++) {
        cin >> num;
        if(pre != 0) {
            if(pre * X + num * X < res) res = pre * X + num * X;
        }

        pre = num;
    }

    cout << res << endl;
    return 0;
}