///week12-3.cpp
///Fibonacci �ƦC (�e�ⶵ�ۥ[,�N�O�U�@��)
///�n��o�C�X�� �ϥ�for�j��B�}�C
#include <stdio.h>
int main()
{
    int a[30] = {0, 1};///�}�C�ŧi,���e2��,�᭱��0
    printf("1 ");///�̫e������
    for(int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d ",a[i]);
    }
}
