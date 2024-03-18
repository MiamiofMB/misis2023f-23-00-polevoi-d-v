#include <complex/complex.hpp>


//Унарный минус
Complex Complex::operator-() noexcept{return Complex(-re,-im);}


Complex& Complex::operator+=(const double rhs) noexcept{
  re+=rhs;  
  return *this;
}
Complex& Compex::operator+=(const Complex& rhs) noexcept{
  re+=rhs.re;
  im+=rhs.im;
  return *this;
}

Complex& Complex::operator-=(const double rhs) noexcept{
  re-=rhs;  
  return *this;
}
Complex& Compex::operator-=(const Complex& rhs) noexcept{
  re-=rhs.re;
  im-=rhs.im;
  return *this;
}

Complex& Complex::operator*=(const double rhs) noexcept{
  re*=rhs;  
  return *this;
}
Complex& Compex::operator*=(const Complex& rhs) noexcept{
  re*=rhs.re;
  im*=rhs.im;
  return *this;
}

Complex& Complex::operator/=(const double rhs){
  re/=rhs;  
  return *this;
}
Complex& Compex::operator/=(const Complex& rhs){
  re/=rhs.re;
  im/=rhs.im;
  return *this;
}



 bool Complex::operator==(Complex& rhs) const noexcept {if (re==rhs.re && im==rhs.im){return true;}else{return false}}
 bool Complex::operator!=(Complex& rhs) const noexcept {if (re==rhs.re && im==rhs.im){return false;}else{return true}}


Complex Complex::operator+(Complex& lhs, Complex& rhs) noexcept{
  return Complex(rhs.re+lhs.re,rhs.im+lhs.im);
}
Complex Complex::operator+(double lhs, Complex& rhs) noexcept{
  return Complex(rhs+lhs.re,lhs.im);
}
Complex Complex::operator+(Complex& lhs, double rhs) noexcept{ 
  return Complex(rhs.re+lhs,rhs.im);
}



Complex Complex::operator-(Complex& lhs, Complex& rhs) noexcept{
  return Complex(lhs.re-rhs.re,lhs.im-rhs.im);
}
Complex Complex::operator-(double lhs, Complex& rhs) noexcept{
  return Complex(lhs-rhs.re,rhs.im);
}
Complex Complex::operator-(Complex& lhs, double rhs) noexcept{ 
  return Complex(lhs.re-rhs,lhs.im);
}


Complex Complex::operator*(Complex& lhs, Complex& rhs) noexcept{
  return Complex(lhs.re*rhs.re,lhs.im*rhs.im);
}
Complex Complex::operator*(double lhs, Complex& rhs) noexcept{
  return Complex(lhs*rhs.re,rhs.im);
}
Complex Complex::operator*(Complex& lhs, double rhs) noexcept{ 
  return Complex(lhs.re*rhs,lhs.im);
}


Complex Complex::operator/(Complex& lhs, Complex& rhs){
  return Complex(lhs.re/rhs.re,lhs.im/rhs.im);
}
Complex Complex::operator/(double lhs, Complex& rhs) noexcept{
  return Complex(lhs/rhs.re,rhs.im);
}
Complex Complex::operator/(Complex& lhs, double rhs) noexcept{ 
  return Complex(lhs.re/rhs,lhs.im);
}


std::ostream& Complex::WriteTo(std::ostream& ostrm) const noexcept { return ostrm; }
std::istream& Complex::ReadFrom(std::istream& istrm) noexcept { return istrm; }








