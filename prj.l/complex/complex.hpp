#ifndef COMPLEX_COMPLEX_H_20191010
#define COMPLEX_COMPLEX_H_20191010

#include <iosfwd>

  //База
struct Complex{
  Complex() = default;
  Complex(Complex&) = default; 
  Complex(Complex&&) = default; 
  ~Complex() = default;

  // Конструирование комплекного числа из действительного и из реальной части и воображаемой
  Complex(const double rational){re=rational;}
  Complex(const double real,const double imag):re(real),im(imag){}
  //Переменные
  double re {0.0}; // как я понял в эту ячейку можно приставить значение через скобки, это все равно что написать re = 10;
  double im {0.0};
  static const char LeftBrace = '{';
  static const char RightBrace = '}';
  static const char Sep = ',';

  //Операторы
  [[nodiscart]] bool operator==(const Complex& rhs) const noexcept;
  [[nodiscart]] bool operator!=(const Complex& rhs) const noexcept;

  //Добавление рационального числа и комплексного
  Complex& operator+=(const double addr) noexcept;
  Complex& operator+=(const Complex& addr) noexcept;

  //Вычитание рационального числа и комплексного
  Complex& operator-=(const double subbr) noexcept;
  Complex& operator-=(const Complex& subbr) noexcept;

  //Деление на рациональное и комплексное 
  Complex& operator/=(const double subbr); // тут как раз будут исключения типа деления на ноль.
  Complex& operator/=(const Complex& subbr);
  //Умножение на рациональное и комплексное
  Complex& operator*=(const double subbr) noexcept;
  Complex& operator*=(const Complex& subbr) noexcept;
}


[[nodiscart]] operator+(const double lhs,const double rhs) noexcept;
[[nodiscart]] operator+(const double lhs,const Complex& rhs) noexcept;
[[nodiscart]] operator+(const Complex& lhs,const double rhs) noexcept;


[[nodiscart]] operator-(const double lhs,const double rhs) noexcept;
[[nodiscart]] operator-(const double lhs,const Complex& rhs) noexcept;
[[nodiscart]] operator-(const Complex& lhs,const double rhs) noexcept;


[[nodiscart]] operator*(const double lhs,const double rhs) noexcept;
[[nodiscart]] operator*(const double lhs,const Complex& rhs) noexcept;
[[nodiscart]] operator*(const Complex& lhs,const double rhs) noexcept;


[[nodiscart]] operator/(const double lhs,const double rhs);
[[nodiscart]] operator/(const double lhs,const Complex& rhs);
[[nodiscart]] operator/(const Complex& lhs,const double rhs);


inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs) noexcept {
  return rhs.WriteTo(ostrm);
}


inline std::istream& operator>>(std::istream& istrm, Complex& rhs) noexcept {
  return rhs.ReadFrom(istrm);
}




#endif
