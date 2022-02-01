#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class Complex
{
    private:
        double real;
        double imag;
    public:
        Complex (double a=0, double b=0)
        {
            cout<<"type value of real: ";cin>>a;
            cout<<" value of imag: ";cin>>b;
            real = a;
            imag = b;
        }
        double Getreal()
        {
            return real;
        }
        double Getimag() {
            return imag;
        }
        Complex operator+ (const Complex& c1){
            Complex sum;
            sum.real= this->real + c1.real;
            sum.imag= this->imag + c1.imag;
            return sum;
        }
        
       /* friend Complex& operator- (const Complex& c1, const Complex& c2){
            Complex c;
            c.real= c1.real - c2.real;
            c.imag= c1.imag - c2.imag;
            return c;
        }
        friend Complex& operator* (const Complex& c1, const Complex& c2){
            Complex c;
            c.real= c1.real*c2.real - c1.imag*c2.imag;
            c.imag= c1.imag*c2.real + c1.real*c2.imag;
            return c;
        }*/
        
        friend ostream& operator<< (ostream& out, const Complex& c){
            out<<c.real<<" + "<<c.imag<<"i";
            return out;
        }
        /*friend istream& operator>> (istream& in, const Complex& c){
            in>>c.real>>c.imag;
            return in;
        }*/
};
int main ()
{
    Complex A;
    Complex B;
    Complex C;
    cout<<" real of Complex A: "<<A.Getreal()<<endl<<" imag of Complex A: "<<A.Getimag();
    cout<<endl;
    C = A + B;
    cout<<"output of Complex C: "<<C<<endl;
    return 0;
}

/*Complex :: Complex (double a, double b)
{
    real = a;
    imag = b;
}
double Complex :: Getreal ()
{
    return real;
}
double Complex :: Getimag ()
{
    return imag;
}*/