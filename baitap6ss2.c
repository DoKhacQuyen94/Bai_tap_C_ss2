#include <stdio.h>
int main(){
    float pi =3.14;
    int banKinh= 5;
    float chuVi = 2*pi*banKinh;
    float dienTich = pi * banKinh *banKinh;
    printf("Chu vi hình tròn bán kính %d: %.2f\n",banKinh, chuVi);
    printf("Diện tích hình tròn bán kính %d: %.2f\n",banKinh, dienTich);
}