#include <Rational/Rational.hpp>
#include <iostream>
//I hate myself. I hate being alone among many. I hate that my complicated maze-like mind makes me unhappy. 
// I feel cold hands of death clinging to my skin every day i go to sleep. 
// I feel anger and spite towards all who have a loving friend or a partner.
//  I hate all of you for being too stupid to understand me. Hate.Hate.Hate.Hate.Hate.Hate.Hate.


//creation
Rational Rational::operator+(Rational& lhs, Rational& rhs){
	if (lhs.bot != rhs.bot) {
		std::int64_t mid_b = lhs.bot * rhs.bot;
		std::int64_t mid_t = lhs.top * rhs.bot + rhs.top * lhs.bot;
	}
	else {
		std::int64_t mid_b = lhs.bot;
		std::int64_t mid_t = lhs.top + rhs.top;
	}
	return Rational(mid_t, mid_b);
}
Rational Rational::operator-(Rational& lhs, Rational& rhs) {
	if (lhs.bot != rhs.bot) {
		std::int64_t mid_b = lhs.bot * rhs.bot;
		std::int64_t mid_t = lhs.top * rhs.bot - rhs.top * lhs.bot;
	}
	else {
		std::int64_t mid_b = lhs.bot;
		std::int64_t mid_t = lhs.top - rhs.top;
	}
	return Rational(mid_t, mid_b);
}
Rational Rational::operator*(Rational& lhs, Rational& rhs) {
	return Rational(rhs.top * lhs.top, rhs.bot * lhs.bot);
}
Rational Rational::operator/(Rational& lhs, Rational& rhs) {
	return Rational(lhs.top * rhs.bot, lhs.bot * rhs.top);
}



Rational Rational::operator+(Rational& lhs, int64_t rhs) {
	return(lhs.top + rhs * lhs.bot, lhs.bot);
}
Rational Rational::operator-(Rational& lhs, int64_t rhs) {
	return(lhs.top - rhs * lhs.bot, lhs.bot);
}
Rational Rational::operator*(Rational& lhs, int64_t rhs) {
	return Rational(lhs.top*rhs, lhs.bot);
}
Rational Rational::operator/(Rational& lhs, int64_t rhs) {
	return Rational(lhs.top, lhs.bot*rhs);
}

Rational Rational::operator+(int64_t lhs, Rational& rhs) {
	return(rhs.top + lhs * rhs.bot, rhs.bot);
}
Rational Rational::operator-(int64_t lhs, Rational& rhs) {
	return(lhs * rhs.bot - rhs.top, rhs.bot);
}
Rational Rational::operator*(int64_t lhs, Rational& rhs) {
	return Rational(rhs.top * lhs, rhs.bot);
}
Rational Rational::operator/(int64_t lhs, Rational& rhs) {
	return Rational(lhs*rhs.bot,rhs.top);
}



//altering
Rational& Rational::operator+=(const Rational& rhs) {
	top += rhs.top;bot += rhs.bot;return *this;
}
Rational& Rational::operator+=(const std::int64_t rhs) {
	top += rhs*bot;return *this;
}

Rational& Rational::operator-=(const Rational& rhs) {
	top -= rhs.top;bot -= rhs.bot;return *this;
}
Rational& Rational::operator-=(const std::int64_t rhs) {
	top -= rhs * bot;return *this;
}

Rational& Rational::operator*=(const Rational& rhs) {
	top *= rhs.top;bot *= rhs.bot;return *this;
}
Rational& Rational::operator*=(const std::int64_t rhs) {
	top *= rhs;return *this;
}

Rational& Rational::operator/=(const Rational& rhs) {
	top *= rhs.bot;bot *= rhs.top;return *this;
}
Rational& Rational::operator/=(const std::int64_t rhs) {
	bot *= rhs;return *this;
}

Rational& Rational::operator++() {
	top++;return *this;
}
Rational& Rational::operator--() {
	top--;return *this;
}


//comparisson
bool Rational::operator>(Rational& rhs) {
	if (bot == rhs.bot) {
		if (top > rhs.bot) { return true; }
	}
	else {
		if (bot<rhs.bot && top>rhs.top) { return true; }
	}
	return false;
}
bool Rational::operator<(Rational& rhs) {
	if (bot == rhs.bot) {
		if (top > rhs.bot) { return false; }
	}
	else {
		if (bot<rhs.bot && top>rhs.top) { return false; }
	}
	return true;
}


bool Rational::operator>=(Rational& rhs) {
	if (bot == rhs.bot) {
		if (top >= rhs.bot) { return true; }
	}
	else {
		if (bot<=rhs.bot && top>=rhs.top) { return true; }
	}
	return false;
}
bool Rational::operator<=(Rational& rhs) {
	if (bot == rhs.bot) {
		if (top >= rhs.bot) { return false; }
	}
	else {
		if (bot<=rhs.bot && top>=rhs.top) { return false; }
	}
	return true;
}

bool Rational::operator ==(Rational& rhs) {
	if (top == rhs.top && bot == rhs.bot) { return true; }
	return false;
}
bool Rational::operator ==(std::int64_t rhs) {
	if (bot == 1 and top == rhs) { return true;}
	return false;
}
bool Rational::operator !=(Rational& rhs) {
	if (top == rhs.top && bot == rhs.bot) { return false; }
	return true;
}
bool Rational::operator !=(std::int64_t rhs) {
	if (bot == 1 and top == rhs) { return false; }
	return true;
}


//ввод и вывод


std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs) noexcept { return ostrm; }

std::istream& operator>>(std::istream& istrm, Rational& rhs) noexcept { return istrm; }