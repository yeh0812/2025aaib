///week08-2.cpp
///�w�w�ƧǪk������
#include <stdio.h>
int main()
{
    ///int a[10] = {3, 0, 1, 8, 7, 2, 5, 4, 6, 9}
    int a[10] = {9, 8 ,7 ,6 ,5 ,4 ,3 ,2 ,1};
    for(int i=0; i<10; i++) printf("%d", a[i]);
    printf("\n");

    for(int k=0; k<9;k++){ ///���ư��ܦh��
        for(int i=0; i<10-1; i++){ ///���۾F���R
            if(a[i]>a[i+1]){ ///���k�j�p����
                int temp = a[i]; ///�N�洫
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d", a[i]);
        printf("\n");
    }
}
