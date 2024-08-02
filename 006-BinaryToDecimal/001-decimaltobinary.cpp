#include<iostream>
using namespace std;

// 15   to  1111

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int i = 1;
    while (n != 0) {
        int bit = n & 1;
        ans = (bit * i) + ans;
        n = n >> 1;
        i =i* 10; // Move to the next decimal place
    }
    cout << ans << endl;
    return 0;
}
