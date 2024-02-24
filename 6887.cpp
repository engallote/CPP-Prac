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

    int N;
    cin >> N;

    int num = 0;
    for(int i = 1; i < 100000; i++)
    {
        if(i * i > N) break;
        num = i;
    }
    cout << "The largest square has side length " << num << "." << endl;

    return 0;
}