#include <stdio.h>
int main(){
    // Kiểu int: số nguyên
    int soNguyen = 9;
    
    // Khai bao mot bien kieu short, dung de luu tru so nguyen co pham vi nho hon int
	short quyen = 200; // Bien e luu tru gia tri 200
    
    // kiểu float: số thực
    float pi =3.14;

    // Kiểu double: số thực chính xác cao
    double soThuc = 3.14378377347;

    // Kiểu char: lưu kí tự 
    char kiTu = 'Q';

    // Kiểu Boolean : Trả Về True (khi đúng:1), False (khi sai:0)
    _Bool dungSai = 1; // 1 đại diện cho true

    // Kiểu unsigned int: số nguyên không âm (thường từ 0 đến 2^32-1 trên hệ thống 32-bit)
    unsigned int soNguyenDuong = 4294967295;

    // Kiểu long: lưu trữ số nguyên lớn hơn int (kích thước phụ thuộc vào hệ thống)
    long soNguyenLon = 1234567890L;// L là hậu tố long

    // Kiểu long long: lưu trữ số nguyên rất lớn (thường từ -2^63 đến 2^63-1)
    long long soNguyenRatLon = 9223372036854775807LL;// LL là hậu tố long long

    // Kiểu unsigned long long: số nguyên không âm rất lớn
    unsigned long long soNguyenRatLonDuong = 18446744073709551615ULL;// ULL là hậu tố unsigned long long

    return 0;
}
