#include <stdio.h>
int main(){
    int chieuDai = 20;
    int chieuRong =15;
    int chuViHcn = (chieuDai+chieuRong)*2;
    int dienTichHcn = chieuDai * chieuRong;
    printf("Chu vi hinh chu nhat chieu dai %d chieu rong %d là: %d \n",chieuDai,chieuRong,chuViHcn);
    printf("Dien tich hinh chu nhat chieu dai %d chieu rong %d là: %d \n",chieuDai,chieuRong,dienTichHcn);
    return 0;
}