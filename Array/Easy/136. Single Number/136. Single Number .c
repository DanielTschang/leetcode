#include <stdio.h>
#include <string.h>

int singleNumber(int* nums, int numsSize){
    for(int i=0; i<numsSize;i++){
        int flag=0;
        for(int j=0;j<numsSize;j++)
        {
            if(i==j){continue;}
            if(nums[i]==nums[j]){
                flag=1;
                break;
        }
        }
        if(flag==0){return nums[i];}
}
    return 0;
}



int main()
{
    int nums[] = {2,2,1};
    int numsSize = (int)(sizeof(nums) / sizeof(nums[0]));
    int answer = singleNumber(nums, numsSize);
    printf("Single number is %d\n",answer);
    return 0;
}
