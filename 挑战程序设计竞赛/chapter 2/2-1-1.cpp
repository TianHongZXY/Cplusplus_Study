#include <iostream>
using namespace std;

const int MAX_N = 100;
int memo[MAX_N + 1];

int fact(int n){
    if (n == 0) return 1;
    else return n * fact(n - 1);
}

int fib(int n){
    if (n <= 1) return n;
    else return fib(n - 1) + fib(n - 2);
}

int fib_2(int n){
    if (n <= 1) return n;
    if (memo[n] != 0) return memo[n];
    return memo[n] = fib_2(n - 1) + fib_2(n - 2);
}

int main(int argc, char const *argv[])
{
    int res = fib_2(5);
    cout << res << endl;
    return 0;
}
