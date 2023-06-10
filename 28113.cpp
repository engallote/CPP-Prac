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

    int N, A, B;
    cin >> N >> A >> B;
    
    if(A < B) {
        cout << "Bus" << endl;
    }
    else if(A > B) {
        cout << "Subway" << endl;
    }
    else {
        cout << "Anything" << endl;
    }

    return 0;
}