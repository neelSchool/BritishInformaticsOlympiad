#include <cstdint>
#include <iostream>
using namespace std;

int main() {
    unsigned long long ans = 0;
    cin >> ans;
    unsigned long long num = ans;
    unsigned long long n = num;
    bool found = false;
    do {
        n = n + 1;
        num = n;
        unsigned long long digit, rev = 0;
        do {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        } while (num != 0);

        if (n == rev)
        {
            found = true;
        }
    } while (found == false);
    cout << n;
}