#include <queuearr.h>
#include <complex/complex.hpp>
#include<stdexcept>




Queuearr::Queuearr(Queuearr& na):size(na.size) {
	head = na.head;
	tail = na.tail;
	Complex* temp = new Complex[na.size];
	delete[] data;
	data = temp;
	temp = nullptr;
}
Queuearr::Queuearr(Queuearr&& na) :size(na.size) {
	std::swap(na.size, size);
	std::swap(na.data, data);
	std::swap(na.tail, tail);
	std::swap(na.head, head);
}

QueueArr& QueueArr::operator=(QueueArr&& src) {
	if (this != &src) {
		std::swap(size_, src.size_);
		std::swap(data_, src.data_);
		std::swap(head_, src.head_);
		std::swap(tail_, src.tail_);
	}
	return *this;
}

Queuearr::push(Complex elem){
	if (data == nullptr) {
		tail == 0;
		head == 0;
		size = 2;
		data = new Complex[size];
		data[tail] = elem
	}
	else{
		size++;
		Complex* temp = new Complex[size];
		std::copy(data,data+head,temp+1)
		temp[tail] = val;
		delete[] data;
		data = temp;
		temp = nullptr;
		head++;
	}

	
}

Queuearr::IsEmpty() {
	return data == nullptr;
}

Queuearr::Pop(){
	if (!IsEmpty()) {
		head -= 1;
	}
}
Complex& Queuearr::Top() {
	if (IsEmpty()) {
		throw std::logic_error("QueueArr - try get top form empty queue.");
	}
	return data_[head_];
}

const Complex& Queuearr::Top() const {
	if (IsEmpty()) {
		throw std::logic_error("QueueArr - try get top form empty queue.");
	}
	return data_[head_];
}

Queuearr::clear() {
	delete[] data;
	head = -1;
	tail = -1;
	size = 0;
}


