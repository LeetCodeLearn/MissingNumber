//
//  main.cpp
//  MissingNumber
//
//  Created by 李佳 on 15/10/12.
//  Copyright © 2015年 LiJia. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int sumValue = (int)nums.size() * ((int)nums.size() + 1) / 2;
        for (int i = 0; i < nums.size(); ++i)
        {
            sumValue -= nums[i];
        }
        return sumValue;
        
        //别人的方式
        /*
        int xOr = 0;
        for (int i = 0; i < nums.size(); ++i) {
            xOr ^= (i ^ nums[i]);
        }
        return xOr ^ (int)nums.size();*/
    }
};

int main(int argc, const char * argv[])
{
    Solution* pSol = new Solution;
    vector<int> nums = {1, 2, 3, 4, 6, 0};
    
    printf("%d\n", 1 ^ 1);
    printf("%d\n", 1 ^ 2);
    printf("%d\n", 1 ^ 2 ^ 3 ^ 3);
    printf("%d\n", pSol->missingNumber(nums));
    delete pSol;
    return 0;
}
