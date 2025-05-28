///week15-2.cpp
///騎車時,觀察前方車牌,發現好像有很多重複的數字
///有重複數字的,機率有多高?
#include <stdio.h>
int main()
{
    int ans = 0;///有幾個重複的數字
    for(int i=0;i<=9999;i++){
        if(helper(i)==1)ans++;
    }
}
