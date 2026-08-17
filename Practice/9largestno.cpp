#include <iostream>
#include <algorithm> // Required for std::max

using namespace std;

int main() {
    int a = 47, b = 80, c = 12;

    // Use initializer list {} to compare 3 or more values
    int maxVal = max({a, b, c}); 

    cout << "The maximum value is: " << maxVal << endl;


    int maxVal2 = a; // Assume 'a' is the largest initially

    if (b > maxVal2) {
        maxVal2 = b;
    }
    if (c > maxVal2) {
        maxVal2 = c;
    }

    cout << "Maximum value is: " << maxVal2 << endl;

    return 0;
}