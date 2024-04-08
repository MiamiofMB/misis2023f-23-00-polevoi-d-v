#include <stackarr.h>
#include <complex/complex.hpp>



stackarr::stackarr(stackarr& na):size(na.size),capasity(na.capasity) {
	complex* temp = new complex[sz];
	data = temp;
	temp = nullptr;

}

stackarr::stackarr(stackarr&& na) {
	std::swap(na.size, size);
	std::swap(na.capasity, capasity);
	std::swap(na.data, data);


}
stackarr::top() {
	if (capasity>0){return data[capasity-1];}
}
stackarr::pop() {
	if (capasity > 0) { capasity -= 1; }
}
stackarr::clear() {
	delete[] data;
	size = 0;
	capasity = 0;
}
stackarr::push(float x) {
	float* temp = new float[size + 1];
	std::copy(data, data + size + 1, temp);
	temp[size] = x;
	size += 1;
	capasity += 1;
	delete[] data;
	data = temp;
	temp = nullptr;
}
stackarr::isEmpty() {
	return capasity == 0;
}
