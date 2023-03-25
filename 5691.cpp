#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b;
    while(true) {
        cin >> a >> b;
        
        if(a == 0 && b == 0) break;
        cout << 2 * a - b << endl;
    }
    return 0;
}