/*
Problem: Count Primes (LeetCode 204)
Topic: Mathematics
Approach: Brute Force

Time Complexity: O(n√n)
Space Complexity: O(1)
*/

class Solution {
private:
    bool isPrime(int n) {
        if (n <= 1)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

public:
    int countPrimes(int n) {
        int count = 0;

        for (int i = 2; i < n; i++) {
            if (isPrime(i))
                count++;
        }
        return count;
    }
};
