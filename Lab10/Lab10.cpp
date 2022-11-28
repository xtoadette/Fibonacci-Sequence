/*
//Name: Stephanie Contino
//Date: 12/2/22
//File name: Lab10.cpp
//Description: This program calculates fibonacci numbers to the Nth term using both a
    recursive implementation and an implementation using memoization.
 */

#include <iostream>

long long count = 0; // Global counter

long long FibonacciR(long long N)
{
    count += 1; //Increment count
    if (N <= 1)
        return N;
    return FibonacciR(N - 1) + FibonacciR(N - 2); //Recursive call
}

long long FibonacciM(long long N)
{
    long long F[N]; //Create array
    F[0] = 0; //Index 0 and 1 will always be 0 and 1
    F[1] = 1;

    for (int i = 2; i <= N; i++) //Fill array
    {
        F[i] = F[i-1] + F[i-2]; //Use previous two index to fill current index
    }
    
    count = N; //Operations will be N
    return F[N];
}
 
int main() {         // Compare two methods of calculating the Fibonacci number
    count = 0;
    long long N = 19;
    std::cout << "F(" << N << ") = " << FibonacciM(N) << ", " << count << " operations" << std::endl;
 
    count = 0;
    std::cout << "F(" << N << ") = " << FibonacciR(N) << ", " << count << " operations" << std::endl;
 
    return 0;
}
