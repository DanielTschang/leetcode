#include <stdio.h>
#include <string.h>
#include <stdbool.h>



bool containsDuplicate(int* nums, int numsSize){
    for(int i=0; i<numsSize-1; i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
            return true;}
        }
    }
    return false;
}

int main()
{
    int nums[] = {2,2,1};
    int numsSize = (int)(sizeof(nums) / sizeof(nums[0]));
    bool answer =containsDuplicate(nums, numsSize);
    printf("Contains? : %d\n",answer);
    return 0;
}
