#include <string>
class Solution {
public:
    bool isPalindrome(int x) {
        int y;
        int z = x;
        string answer;
        if (x < 0) {
            return false;
        }
        if (x==0)
            return true;
        while (x > 0) {
            y = x % 10;
            answer += std::to_string(y);
            x = x / 10;
        }
        if (std::stol(answer) == z) {
            return true;
        }
        return false;
    }
};