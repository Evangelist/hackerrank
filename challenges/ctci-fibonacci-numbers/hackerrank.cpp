#include <iostream>

using namespace std;

int fibonacci(int n) {
    // Complete the function.
    // start
    if (n == 0 || n == 1)
        return n;
    int n1 = 0;
    int n2 = 1;
    int n3 = 0;
    for (int i = 2; i <= n; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
    // end
}
int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
