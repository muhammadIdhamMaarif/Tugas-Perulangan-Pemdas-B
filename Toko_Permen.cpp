#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Muhammad Idham Ma'arif


int main() {
    int n;
    cin >> n;
    int total = 0;
    while (n--) { //mengulang sampai n = 0
        int tmp;
        cin >> tmp;
        total += tmp;
    }
    cout << total << endl;
    return 0;
}
