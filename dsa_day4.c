#include<stdio.h>
int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0){
        return 0;
    }
    int i = 0;
    for(int j = 1;j < numsSize; j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
            
        }
    }
    return i+1;

}
int main(){
    int nums[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int numsSize = 10;
    int c = removeDuplicates(nums, numsSize);
    printf("%d\n",c);
    printf("[");
    for(int j = 0;j < c; j++){
        if(j != c-1){
            printf("%d, ",nums[j]);
        }
        else if(j==c-1){
            printf("%d",nums[j]);
        }   
    }
    printf("]");
    return 0;
}
