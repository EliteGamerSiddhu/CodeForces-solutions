#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[100];
    int won = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a[i] = temp;
    }
    int thres = a[k - 1];
    for (int i = 0; i < n; i++) {
        if (a[i] >= thres && a[i] > 0) {
            won++;
        }
    }
    cout << won;
    return 0;
}