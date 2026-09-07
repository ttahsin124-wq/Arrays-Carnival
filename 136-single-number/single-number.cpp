class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int result=0;
    for(int num:nums)
    {
        result^=num;// when pair needs to cancel and one value needs to survive XOR is the solution because it makes all the pair disappear
    }
    return result;
    }
};