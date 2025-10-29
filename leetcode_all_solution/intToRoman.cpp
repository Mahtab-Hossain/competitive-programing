#include<iostream>
#include<vector>
#include<string>
using namespace std;
//solution class
class Solution{
    public:
    string intTorRoman(int n){
        const vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        const vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string res = "";
        for(int i=0;i<values.size()&& n>0; ++i){
            while(n>= values[i]){
                res += symbols[i];
                n -= values[i];
            }

        }
        return res;
    }
};
//main 
int main(){
    Solution s;
    int test;
    cin>>test;
    cout<<"The roman number for "<<test<<" "<<" is "<<" "<<s.intTorRoman(test)<<endl;
    return 0;
}