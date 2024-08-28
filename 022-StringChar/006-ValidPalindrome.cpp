#include<iostream>
#include<string.h>
using namespace std;

bool isValidPalindrome(char word[], int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        if (word[s++] != word[e--]) {
            cout << "It's not a valid Palindrome" << endl;
            return false;
        }
    }
    cout << "It's a valid Palindrome" << endl;
    return true;
}

int main() {
    char word[] = "racer";  // You don't need to specify size here
    isValidPalindrome(word, strlen(word));
    return 0;
}
