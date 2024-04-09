#include <stackarr.h>
#include <complex/complex.hpp>



Stackarr::Stackarr(stackarr& na):size(na.size),capasity(na.capasity) {
	complex* temp = new complex[sz];
	data = temp;
	temp = nullptr;

}

Stackarr::Stackarr(stackarr&& na) {
	std::swap(na.size, size);
	std::swap(na.capasity, capasity);
	std::swap(na.data, data);


}
Stackarr::top() {
	if (capasity>0){return data[capasity-1];}
}
Stackarr::pop() {
	if (capasity > 0) { capasity -= 1; }
}
Stackarr::clear() {
	delete[] data;
	size = 0;
	capasity = 0;
}
Stackarr::push(float x) {
	float* temp = new float[size + 1];
	std::copy(data, data + size + 1, temp);
	temp[size] = x;
	size += 1;
	capasity += 1;
	delete[] data;
	data = temp;
	temp = nullptr;
}
Stackarr::isEmpty() {
	return capasity == 0;
}

