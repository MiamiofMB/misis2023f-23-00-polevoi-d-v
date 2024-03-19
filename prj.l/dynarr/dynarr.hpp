#pragma once
#ifndef DYNARR_DYNARR_HPP_20231203
#define DYNARR_DYNARR_HPP_20231203
#include <cstddef>



class dynarr {
private:
	int64_t size = 0;
	float* data = new float[0];
public:
	dynarr() = default;
	dynarr(const int64_t siz) { delete data;data = new float[siz]{0};size = siz; }
	dynarr(dynarr&) = default;
	dynarr(dynarr&&) = default;
	~dynarr() { delete data; data = nullptr; }
	float operator[](int indx) const;
	void push_back(float ins) const;
	void resize(int new_size);
	[[nodiscard]] int size() const noexcept;

};





#endif
