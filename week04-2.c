//week04-2.c 是今天的LeetCode 挑戰提 Easy 題(二合一)
//LeetCode 2529 Maxinum ount of Positive Integer and Negative Integer
int maximumCount(int* nums, int numsSize) {
    int pos =0, neg=0;//迴圈前面,都是0
    for(int i=0; i<numsSize; i++){
        if(nums[i]>0)pos++;//正數
        if(nums[i]<0)neg++;//負數
    }//迴圈中間,更新、修改它

    //迴圈後面,把它拿來用
    if (pos>neg)return pos;//正數比較多,正數
    else return neg;//不然,就負數
}
