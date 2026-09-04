#include <stdio.h>
int removeDuplicates(int *nums, int numsSize)
{
    if(numsSize <= 2){
        return numsSize;
    }
    int i = 2;
    for(int j = 2; j < numsSize; j++){
        if(nums[j] != nums[i-2]){
            nums[i] = nums[j];
            i++;
        }
    }
    return i;

}
int main(){
    int nums[11] = {1,1,2,2,2,3,4,4,4,4,5};
    int numsSize = 11;
    int returnSize = removeDuplicates(nums, numsSize);
    printf("%d\n", returnSize);
    printf("[");
    for(int j = 0; j < returnSize; j++){
        if(j == returnSize-1){
            printf("%d",nums[j]);
        }
        else{
            printf("%d, ",nums[j]);
        }
    }
    printf("]");
    return 0;
}