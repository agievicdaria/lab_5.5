#include <iostream>
using namespace std;

int f(int n, int &depth) {
    if (n == 0) {
        return 0;
    }
    
    int lastDigit = n % 10; 
    depth++;
    int sumWithoutLastDigit = f(n / 10, depth);
    
    return lastDigit + sumWithoutLastDigit;
}

int main() {
    int n;
    cout << "Натуральне число n: "; cin >> n;
    
    int depth = 0;
    int sum = f(n, depth);
    
    cout << "Сума цифр числа " << n << " дорівнює: " << sum << endl;
    cout << "Глибина рекурсії дорівнює: " << depth << endl;
    
    return 0;
}
