
#pragma once
#ifndef RATIONAL_RATIONAL_HPP_20231113
#define RATIONAL_RATIONAL_HPP_20231113

#include <cstdint>
#include <iosfwd>
#include <stdexcept>

class Rational {
public:
	//ячейки памяти 
	std::int64_t top{ 0 };//числитель
	std::int64_t bot{ 1 };//знаменатель

	//конструкторы и прочая хрень
	Rational() = default;
	explicit Rational(std::int64_t t, std::int64_t b) { top = t;bot = b; if (bot == 0) { throw std::invalid_argument("Zero denumenator in Rational ctor") } }
	Rational(std::int64_t x) { top = x;bot = 1; }
	Rational(Rational&) = default;
	Rational(Rational&&) = default;
	~Rational() = default;

	//геттеры
	[[nodiscart]] std::int64_t top() noexcept { return top; }
	[[nodiscart]] std::int64_t bottom() noexcept { return bot; }

	//операторы изменения
	Rational& operator +=(const Rational& rhs) noexcept;
	Rational& operator +=(std::int64_t rhs) noexcept;

	Rational& operator -=(const Rational& rhs) noexcept;
	Rational& operator -=(std::int64_t rhs) noexcept;

	Rational& operator /=(const Rational& rhs);
	Rational& operator /=(std::int64_t rhs);

	Rational& operator *=(const Rational& rhs) noexcept;
	Rational& operator *=(std::int64_t rhs) noexcept;

	Rational& operator++() noexcept;
	Rational& operator--() noexcept;


	[[nodiscard]] Rational operator-() const noexcept { return { -top, -bot }; } // унарный минус

	//операторы сравнения
	[[nodiscard]] bool operator<=(Rational& rhs) noexcept;
	[[nodiscard]] bool operator>=(Rational& rhs) noexcept;
	[[nodiscard]] bool operator<(Rational& rhs) noexcept;
	[[nodiscard]] bool operator>(Rational& rhs) noexcept;
	[[nodiscard]] bool operator==(Rational& rhs) noexcept;
	[[nodiscard]] bool operator!=(Rational& rhs) noexcept;
	[[nodiscard]] bool operator==(int64_t rhs) noexcept;
	[[nodiscard]] bool operator!=(int64_t rhs) noexcept;



};

//операторы создания

[[nodiscard]] Rational operator+(Rational& lhs, Rational& rhs) noexcept;
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










