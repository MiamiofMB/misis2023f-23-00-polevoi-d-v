
#pragma once
#ifndef RATIONAL_RATIONAL_HPP_20231113
#define RATIONAL_RATIONAL_HPP_20231113

#include <cstdint>
#include <iosfwd>


class Rational {
public:
	//ячейки памяти 
	std::int64_t top{ 0.0 };//числитель
	std::int64_t bot{ 0.0 };//знаменатель
	
	//конструкторы и прочая хрень
	Rational() = default;
	explicit Rational(std::int64_t t, std::int64_t b) { top = t;bot = b;}
	Rational(std::int64_t x) { top = x;bot = 0.0;}
	Rational(Rational&) = default;
	Rational(Rational&&) = default;
	~Rational() = default;

	//геттеры
	[[nodiscart]] double top() noexcept { return top; }
	[[nodiscart]] double bottom() noexcept { return bot; }

	//операторы изменения
	Rational& operator +=(const Rational& rhs) noexcept;
	Rational& operator +=(std::int64_t rhs) noexcept;

	Rational& operator -=(const Rational& rhs) noexcept;
	Rational& operator -=(std::int64_t rhs) noexcept;

	Rational& operator /=(const Rational& rhs);
	Rational& operator /=(std::int64_t rhs);
	
	Rational& operator *=(const Rational& rhs) noexcept;
	Rational& operator *=(std::int64_t rhs) noexcept;

	//операторы сравнения
	[[nodiscard]] bool operator<=(Rational& rhs) noexcept;
	[[nodiscard]] bool operator>=(Rational& rhs) noexcept;
	[[nodiscard]] bool operator<(Rational& rhs) noexcept;
	[[nodiscard]] bool operator>(Rational& rhs) noexcept;
	[[nodiscard]] bool operator==(Rational& rhs) noexcept;
	[[nodiscard]] bool operator!=(Rational& rhs) noexcept;



};

//операторы создания

[[nodiscard]] Rational operator+(Rational& lhs,Rational& rhs) noexcept;
[[nodiscard]] Rational operator+(const  std::int64_t lhs, Rational& rhs) noexcept;
[[nodiscard]] Rational operator+(Rational& lhs, const std::int64_t rhs) noexcept;

[[nodiscard]] Rational operator-(Rational& lhs, Rational& rhs) noexcept;
[[nodiscard]] Rational operator-(const  std::int64_t lhs, Rational& rhs) noexcept;
[[nodiscard]] Rational operator-(Rational& lhs, const std::int64_t rhs) noexcept;

[[nodiscard]] Rational operator/(Rational& lhs, Rational& rhs);
[[nodiscard]] Rational operator/(const  std::int64_t lhs, Rational& rhs);
[[nodiscard]] Rational operator/(Rational& lhs, const std::int64_t rhs);

[[nodiscard]] Rational operator*(Rational& lhs, Rational& rhs) noexcept;
[[nodiscard]] Rational operator*(const  std::int64_t lhs, Rational& rhs) noexcept;
[[nodiscard]] Rational operator*(Rational& lhs, const std::int64_t rhs) noexcept;


//вывод и ввод
std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs) noexcept;

std::istream& operator>>(std::istream& istrm, Rational& rhs) noexcept;

#endif 

