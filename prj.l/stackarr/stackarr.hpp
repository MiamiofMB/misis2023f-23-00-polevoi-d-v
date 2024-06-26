#pragma once
#include <iostream>
#ifndef STACKARR_STACKARR_HPP_20240203
#define STACKARR_STACKARR_HPP_20240203

#include <complex>

class Stackarr{
private:
	int64_t size = 0;
	int64_t capasity = 0;
	float* data = new float[size];
public:
	Stackarr() = default;
	
	Stackarr(stackarr& s) = default;
	Stackarr(stackarr&& s) = default;

	~Stackarr(){delete[] data;}

	void pop(); // я не уверен, что нам нужен noexcept тут потому что поп можно взвать от пустого стека что спровоцирует ошибку.
	
	void push(int64_t indx) noexcept;

	[[nodiscard]] const float& top();

	bool isEmpty() noexcept;

	void clear() noexcept;
};




#endif





