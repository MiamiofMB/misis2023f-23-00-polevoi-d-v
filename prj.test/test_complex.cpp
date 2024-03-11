#include <complex/complex.hpp>

int main(){
  //base check
  Complex a = Complex(1.1,0.1);
  Complex b = Complex(241.12,1.1);
  Complex c = a+b;
  std::cout<<c;
  Complex c = a-b;
  std::cout<<c;
  Complex c = a*b;
  std::cout<<c;
  Complex c = a/b;
  std::cout<<c;
  a+=2.2;
  std::cout<<a;
  a+=c;
  std::cout<<a;
  a-=2.2;
  std::cout<<a;
  a-=c;
  std::cout<<a;
  a*=2.2;
  std::cout<<a;
  a*=c;
  std::cout<<a;
  a/=2.2;
  std::cout<<a;
  a/=c;
  std::cout<<a;
  //0 devision check
  Complex h = Complex(0.0,0.0);
  Complex h1 = Complex(0.1,0.1);
  h1/=h;  
}
