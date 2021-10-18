#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n, m;
int arr[9] = { 0, };

int sol(int num, int cnt, string s) {
    if (cnt == m) {
        cout << s << endl;
        return 0;
    }
    s += " ";
    for (int i = num + 1; i < n; i++) {
        sol(i, cnt + 1, s + to_string(arr[i]));
    }
    return 0;
}

int main() {

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        sol(i, 1, to_string(arr[i]));
    }
    return 0;
}
