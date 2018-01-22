/*************************************************************************
> File Name: removeDuplicates.c
> Author: limeiying
> Mail: 
> Created Time: 2018年01月22日 星期一 15时23分38秒
 ************************************************************************/
/*
给定一个有序数组，删除重复内容，使每个元素只出现一次，并返回新的长度。 不要为其他数组分配额外的空间，您必须通过在O（1）来实现。
解决方法：记录不重复的元素个数并返回
*/
#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) {
        if(numsSize==0)return 0;  
        int index=0;  
        for(int i=1;i<numsSize;i++)  
        {  
            if(nums[index]!=nums[i])  
            nums[++index]=nums[i];  
        }  
       
        return index+1;   
}
int main(){
     int nums={1,1,2};
     int numsSize=3;
     int result=removeDuplicates(nums,numsSize);
     printf("%d\n",result);
}
