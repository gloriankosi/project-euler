/**
 * @file pe2.cc
 * @author Glorian Kosi
 * @brief Project Euler #3: Largest prime factor
 * 
 * Uses Sieve Of Eratosthenes:
 * https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
 */

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::floor;
using std::vector;

long long SieveOfEratosthenes(long long);

int main()
{
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++)
    {
        long long n;
        cin >> n;
        cout << SieveOfEratosthenes(n) << "\n";
    }
    return 0;
}

long long SieveOfEratosthenes(long long n)
{
    long long max = -1;

    while (n % 2 == 0)
    {
        max = 2;
        n = floor(n / 2);
    }

    /**
 * 
 * @brief Gets rid of all primes
 *  
 * NOTE: it must start at 3, if the loop
 * starts at 1, then it will hang in the inner while loop, starting at 2 
 * and incrementing by 2 doesn't work because composites have been removed
 * in the previous while loop, incrementing by 3 and starting at 2, skips 3 as 
 * a possible prime factor. 
 * 
 */
    for (long long i = 3; i <= sqrt(n) + 1; i = i + 2)
    {
        while (n % i == 0)
        {
            max = i;
            n = floor(n / i);
        }
    }
    if (n > 2)
    {
        return n;
    }
    else
    {
        return max;
    }
}