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
#include <sstream>
#include <regex>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    int minNum = min(N + M, N - M), maxNum = max(N + M, N - M);

    cout << maxNum << endl;
    cout << minNum << endl;

    return 0;
}