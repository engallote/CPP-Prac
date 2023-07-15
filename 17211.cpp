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

    int N, M;
    cin >> N >> M;

    double a, b, c,  d, happy = 0.0, bad = 0.0;
    cin >> a >> b >> c >> d;

    if (M == 1)
    {
        happy = c;
        bad = d;
    }
    else
    {
        happy = a;
        bad = b;
    }
    
    double num1, num2;
    for (int i = 1; i < N; i++)
    {
        num1 = happy * a + bad * c;
        num2 = bad * d + happy * b;

        happy = num1;
        bad = num2;
    }

    happy *= 1000;
    bad *= 1000;

    cout << (int)happy << endl;
    cout << (int)bad << endl;
    return 0;
}