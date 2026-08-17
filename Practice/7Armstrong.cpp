#include <iostream>
#include <cmath> // For std::pow

using namespace std;

// Function to calculate power without floating-point precision issues
int power(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; ++i) {
        res *= base;
    }
    return res;
}

// Function to count digits in a number
int countDigits(int n) {
    if (n == 0) return 1;
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

bool isArmstrong(int n) {
    if (n < 0) return false; // Negative numbers are not Armstrong numbers

    int temp = n;
    int digits = countDigits(n);
    long long sum = 0; // Long long to prevent overflow during sum addition

    while (temp > 0) {
        int lastDigit = temp % 10;
        sum += power(lastDigit, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    if (!(cin >> n)) return 0;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is NOT an Armstrong number." << endl;
    }

    return 0;
}