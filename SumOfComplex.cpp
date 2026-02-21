#include <iostream>
using namespace std;
class Complex{
    private:
    float re;
    float im;
    
    public:
    void set(){
        cout<<"Enter real and imaginary parts: ";
        cin>>re>>im;
    }
    void disp(){
        cout<<"Complex no = "<<endl;
        cout<<re<<"+i"<<im<<endl;
    }
    Complex sumf(Complex n1,Complex n2){
       Complex sum;
       sum.re=n1.re+n2.re;
       sum.im=n1.im+n2.im;
       return sum;
      
    }
};
int main()
{
    Complex n1;
    n1.set(); n1.disp(); cout<<endl;

    Complex n2;
    n2.set(); n2.disp(); cout<<endl;

    Complex add = add.sumf(n1,n2);
    add.disp();
    return 0;
}