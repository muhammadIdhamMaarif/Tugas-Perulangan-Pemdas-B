#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Muhammad Idham Ma'arif

int main() {
    int batasBawah, batasAtas, masukan;
    cin >> batasBawah >> batasAtas;
    bool dalamRange;
    do {
        cin >> masukan;
        dalamRange = (masukan >= batasBawah && masukan <= batasAtas);
        if (!dalamRange) {
            cout << "Unvalid number" << endl;
        }
    } while (!dalamRange);
    cout << "Valid number";
    return 0;
}
