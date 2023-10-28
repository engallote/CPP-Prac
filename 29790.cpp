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

    int N, U, L;
    cin >> N >> U >> L;

    if(N >= 1000 && (U >= 8000 || L >= 260))
    {
        cout << "Very Good" << endl;
    }
    else if(N >= 1000)
    {
        cout << "Good" << endl;
    }
    else
    {
        cout << "Bad" << endl;
    }

    return 0;
}