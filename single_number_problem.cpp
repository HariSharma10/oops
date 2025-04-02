// using xor operation

//0^0=0, 0^1=1, 1^0=1, 1^1=0

//n^0=n, n^n=0 // n is any number


#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int i = 0; i < nums.size(); i++) {
        result ^= nums[i];
    }
    return result;
}
int main() {
    vector<int> nums = {4,1,2,1,2};
    cout << singleNumber(nums) << endl;
    return 0;
}