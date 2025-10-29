#include <bits/stdc++.h>

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        bool isNegative = (dividend < 0) != (divisor < 0);

        long long absDividend = std::abs((long long)dividend);
        long long absDivisor = std::abs((long long)divisor);
        
        long long quotient = 0;

        for (int i = 31; i >= 0; --i) {
            if ((absDivisor << i) <= absDividend) {
                absDividend -= (absDivisor << i);
                quotient += (1LL << i);
            }
        }

        return isNegative ? (int)-quotient : (int)quotient;
    }
};

int main() {
    Solution s;
    
    int d1 = 10;
    int r1 = 3;
    std::cout << "Test 1: " << d1 << " / " << r1 << " = " << s.divide(d1, r1) << std::endl;

    int d2 = 7;
    int r2 = -3;
    std::cout << "Test 2: " << d2 << " / " << r2 << " = " << s.divide(d2, r2) << std::endl;

    int d3 = INT_MIN;
    int r3 = -1;
    std::cout << "Test 3: INT_MIN / -1 = " << s.divide(d3, r3) << std::endl;

    return 0;
}