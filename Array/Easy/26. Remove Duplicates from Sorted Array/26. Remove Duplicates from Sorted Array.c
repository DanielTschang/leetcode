#include <stdio.h>
#include <string.h>

//Leetcode 26 (easy) Remove Duplicated from sorted array
//���@�Ӥw�g�ƧǦn��array
//�ҥH����²��u�n�O�U�R���X�Ӧb��array�ާ@�N�n


int removeDuplicates(int* nums, int numsSize){
    int newSize =numsSize;
    int DelVal = 0; //�R���F�X��
    for(int i=0;i<numsSize-1;i++)
    {
        if (nums[i]==nums[i+1])
        {
            newSize--;
            DelVal++;
        }
        else
        {
            nums[i+1-DelVal]=nums[i+1]; //�U�@�Ӧ�m��R���F�X�� ����U�@�ӼƦr����l e.g: 1223 i=2, �]���n�R��2�]���Hi+1�л\i=2����l
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
