#include <stdio.h>
#include <string.h>

int maxProfit(int* prices, int pricesSize){
    int Profit = 0;
    int MaxInt = 10000;
    for(int i=0;i<pricesSize;i++)
    {
        if (prices[i]<MaxInt)
        {
            MaxInt = prices[i];
        }
        int CurPro = prices[i]- MaxInt;
        if (CurPro > 0)
        {
            MaxInt = prices[i];
            Profit+=CurPro;
        }
    }
    return Profit;
}


int main()
{
    int nums[] = {1,2,3,4,1,8};
    int numsSize = (int)(sizeof(nums) / sizeof(nums[0]));
    int answer = maxProfit(nums, numsSize);
    printf("MaxProfit %d\n",answer);
    return 0;
}
