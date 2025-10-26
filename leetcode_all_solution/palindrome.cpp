#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversed_half = 0;
        while (x > reversed_half) {
            reversed_half = reversed_half * 10 + x % 10;
            x /= 10;
        }

        return x == reversed_half || x == reversed_half / 10;
    }
};

int main() {
    Solution s;

    int num1 = 121;
    cout << "Is " << num1 << " a palindrome? " 
         << (s.isPalindrome(num1) ? "True" : "False") << endl; 
    
    int num2 = -121;
    cout << "Is " << num2 << " a palindrome? " 
         << (s.isPalindrome(num2) ? "True" : "False") << endl; 

    int num3 = 10;
    cout << "Is " << num3 << " a palindrome? " 
         << (s.isPalindrome(num3) ? "True" : "False") << endl; 
    
    return 0;
}