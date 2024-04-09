
using namespace std;
// Problem 1
int findMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Minimum element is " << findMinimum(arr, n) << endl;
    delete[] arr;
    return 0;
}
//Problem 2
#include <iostream>
using namespace std;

double findAverage(int arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Average is " << findAverage(arr, n) << endl;
    delete[] arr;
    return 0;
}
//Problem 3
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) cout << n << " is Prime" << endl;
    else cout << n << " is Composite" << endl;
    return 0;
}
//Problem 4
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << "! = " << factorial(n) << endl;
    return 0;
}
// Problem 5
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci " << n << " = " << fibonacci(n) << endl;
    return 0;
}
// Problem 6
#include <iostream>
using namespace std;

int power(int a, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        int half_power = power(a, n / 2);
        return half_power * half_power;
    }
    else {
        return a * power(a, n - 1);
    }
}

int main() {
    int a, n;
    cout << "Enter base and exponent: ";
    cin >> a >> n;
    cout << a << " raised to the power " << n << " = " << power(a, n) << endl;
    return 0;
}
// Problem 8
#include <iostream>
#include <string>

bool all_digits(const std::string& s, size_t index = 0) {
    if (index == s.length()) {
        return true; 
    }
    if (!isdigit(s[index])) {
        return false; 
    }
    return all_digits(s, index + 1); 
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    if (all_digits(s)) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
//Problem 9
#include <iostream>

int binomial_coefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
   
    return binomial_coefficient(n - 1, k - 1) + binomial_coefficient(n - 1, k);
}

int main() {
    int n, k;
    std::cout << "Enter n and k: ";
    std::cin f1f11f>> n >> k;

    if (k < 0 || k > n) {
        std::cout << "Invalid input: k should be in range [0, n]." << std::endl;
        return 1;
    }

    std::cout  << binomial_coefficient(n, k) << std::endl;

    return 0;
}
// Problem 10
#include <iostream>

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cout << "Enter two numbers a and b: ";
    std::cin >> a >> b;

    std::cout << gcd(a, b) << std::endl;

    return 0;
}

