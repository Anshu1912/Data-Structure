#include<iostream>
using namespace std;
class Complex
{
    int real, imag; //real and imaginary part as private data members.
public :


    void get()
    {
        cout<<"Enter real and imaginary part: ";
        cin>>real>>imag;
        cout<<"You entered: ";
        display(real,imag);
    }
     void display(int  , int )
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }


    friend void mul(Complex , Complex );
};
void mul( Complex c1,  Complex c2)
{
    int real = (c1.real*c2.real)-(c1.imag*c2.imag);
    int imag = (c1.real*c2.imag)+(c1.imag*c2.real);
    cout<<"multiplication is : "<<real<<"+"<<imag<<"i"<<endl;

}
int main()
{
    Complex c1, c2;
    c1.get();
//    c1.display();
    c2.get();
   // c3.display();
    mul(c1,c2);
    return 0;
}
