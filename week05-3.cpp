///week05-3.cpp
///LeetCode 2206. Divide Array Into Egual Pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501]={}; //秨501皚,常干0
        int odd=0;
        for(int i=0; i<nums.size(); i++){
            int now =nums[i];//瞷矪瞶ゅ
            a[now]++;//now糤Ω
            if(a[now]%2==0)odd--;//Чぇ琌案计,ぶ计
            else odd++;//计
        }
        if(odd==0) return true;
        else return false;


    }
};
