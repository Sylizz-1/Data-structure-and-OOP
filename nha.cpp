
#include <iostream>
#include <math.h>
using namespace std;
class Complex
{
public :
Complex (double a, double b) ;
// Tạo ra số phức có phần thực a, phần ảo b
double GetReal() ;
// Trả về phần thực của số phức.

private :
double real ;
double imag ;
} ;
int main ( )
{
Complex A (3.2, 5.7) ;
Complex B (6.3, -4.5) ;
cout << "ket qua: " << A.GetReal( ) << endl;
//cout << "“Phần ảo của số phức A:”" << A.GetImag ( ) << endl ;
//A = A + B ;
//cout << A << endl ; // In ra số phức A.
return 0 ;
}
// Sau đây là cài đặt các hàm đã khai báo trong lớp Complex
Complex :: Complex (double a, double b)
{
real = a ;
imag = b ;
}
double Complex:: GetReal () 
{
return real ;
}