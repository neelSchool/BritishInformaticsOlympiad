#include <iostream>
using namespace std;

int main() {
    int orig = 0;
    bool found = false;
    cin >> orig;
    for (orig = orig + 1; (found = false); orig++) {
        int n, num = orig;
        int digit, rev = 0;
        do {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
        } while (num != 0);
        
        if (n == rev)
        {
            found = true;
            break;
        }
    }
    cout << orig;
}