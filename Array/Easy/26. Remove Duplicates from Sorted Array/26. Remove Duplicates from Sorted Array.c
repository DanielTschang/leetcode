#include <stdio.h>
#include <string.h>

//Leetcode 26 (easy) Remove Duplicated from sorted array
//給一個已經排序好的array
//所以其實很簡單只要記下刪除幾個在對array操作就好


int removeDuplicates(int* nums, int numsSize){
    int newSize =numsSize;
    int DelVal = 0; //刪除了幾個
    for(int i=0;i<numsSize-1;i++)
    {
        if (nums[i]==nums[i+1])
        {
            newSize--;
            DelVal++;
        }
        else
        {
            nums[i+1-DelVal]=nums[i+1]; //下一個位置減掉刪除了幾個 等於下一個數字的位子 e.g: 1223 i=2, 因為要刪掉2因此以i+1覆蓋i=2的位子
        }
    }
    return newSize;
}

int main(){
    int nums[] = {1,1,1,2,3,3,5};
    int numsSize = (int)(sizeof(nums) / sizeof(nums[0]));
    int newSize = removeDuplicates(nums, numsSize);
    printf("the new size of array is %d\n",newSize);
    printf("array after duplicated :");
    for(int j=0; j<newSize;j++)
    {
        printf(" %d",nums[j]);
    }
    return 0;
}
