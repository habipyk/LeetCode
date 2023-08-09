int differenceOfSum(int* nums, int numsSize){
    int esum = 0;
    int dsum = 0;
    int i = 0;
    while(numsSize--)
    {
        esum += nums[i];
        while(nums[i]>0)
        {
            dsum += nums[i]%10;
            nums[i]/=10;
        }
        i++;
    }
    return(esum-dsum);
}