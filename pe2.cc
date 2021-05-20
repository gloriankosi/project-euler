/**
 * @file pe2.cc
 * @author Glorian Kosi
 * @brief Project Euler #2: Even Fibonacci numbers
 */

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

long long Fibonacci(long long);

int main()
{
    long long t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++)
    {
        long long n;
        cin >> n;
        long long sum = Fibonacci(n);
        cout << sum << "\n";
    }
    return 0;
}

long long Fibonacci(long long N)
{
    long long evenSum = 0;
    long long current = 2;
    long long prev = 1;
    while ((current) < N)
    {
        if (current % 2 == 0)
        {
            evenSum += current;
        }
        long long temp = current;
        current = current + prev;
        prev = temp;
    }

    return evenSum;
}
