//week04-2.c �O���Ѫ�LeetCode �D�Դ� Easy �D(�G�X�@)
//LeetCode 2529 Maxinum ount of Positive Integer and Negative Integer
int maximumCount(int* nums, int numsSize) {
    int pos =0, neg=0;//�j��e��,���O0
    for(int i=0; i<numsSize; i++){
        if(nums[i]>0)pos++;//����
        if(nums[i]<0)neg++;//�t��
    }//�j�餤��,��s�B�ק復

    //�j��᭱,�⥦���ӥ�
    if (pos>neg)return pos;//���Ƥ���h,����
    else return neg;//���M,�N�t��
}
