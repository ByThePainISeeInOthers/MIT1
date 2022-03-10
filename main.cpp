#include <iostream>
#include <conio.h>

using namespace std;
int fib(int n) {
    int a = 0, b = 1;
    cout << a << endl << b << endl;
    for (int i = 2; i < n; ++i) {
    b += a;
    a = b - a;
    cout << b << endl;
    }
}

int main() {
    int n;
    cin >> n;
    fib(n);
    getch();
    return 0;
}