/**
 * @file pe1.cc
 * @author Glorian Kosi
 * @brief Project Euler #1: Multiples of 3 and 5
 */

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

long ArithmeticSum(long, long);

int main()
{
    long t;
    cin >> t;
    for (long a0 = 0; a0 < t; a0++)
    {
        long sum = 0;
        long n;
        cin >> n;
        long x = ArithmeticSum(3, n - 1);
        long y = ArithmeticSum(5, n - 1);
        long z = ArithmeticSum(15, n - 1); // Need to remove any multiples of 15 or they're counted twice
        sum = (x + y) - z;
        cout << sum << "\n";
    }

    return 0;
}
/**
 * @brief 
 * 
 * @param b Multiple integer we're looking for, multiply it with arithmetic sum to get total sum of values with b as a multiple.
 * @param n Total number of elements
 * @return long 
 */
long ArithmeticSum(long b, long n)
{
    long a = (n / b) + 1;
    long l = (b * (n / b) * a) / 2;
    return l;
}