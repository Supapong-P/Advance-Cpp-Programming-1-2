#include <iostream>
using namespace std;

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int number = 5;
    int result = factorial(5);
    cout << "Factorial of  " << number << " is " << result << endl;

    return 0;
}