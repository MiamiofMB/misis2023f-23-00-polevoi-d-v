#include <complex/complex.hpp>

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
  im&=rhs.im;
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


Complex Complex::operator+()







