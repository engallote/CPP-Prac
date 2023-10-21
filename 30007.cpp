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

    int N, A, B, X;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> A >> B >> X;
        cout << A * (X - 1) + B << endl;
    }

    return 0;
}