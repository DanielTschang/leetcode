#include <stdio.h>
#include <string.h>
//第一種在leetcode上會出錯
void rotate(int* nums, int numsSize, int k){
    int tmp[k];
    int t=0;
    for(int i=numsSize-k;i<numsSize;i++)
    {
        tmp[t++]=nums[i];
    }

    for(int j=0;j<=numsSize-k;j++){
        nums[numsSize-j]=nums[numsSize-j-k];
    }
    for(int z =0;z<k;z++){
        nums[z]=tmp[z];
    }
}



void rotate2(int* nums, int numsSize, int k) {
    for(int i=0;i<k;i++)
    {
        int tmp=nums[numsSize-1];
        for(int j=numsSize-2;j>=0;j--)
            nums[j+1]=nums[j];
        nums[0]=tmp;
    }
}

int main(){
    int nums[] = {1,2,3,4,5,6,7};
    int numsSize = 7;
    int k = 3;
    rotate2(nums, numsSize,k);
    for(int o=0;o<numsSize;o++)
    {
        printf("%d",nums[o]);
    }
    return 0;
}
