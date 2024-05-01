#include <queuelst.h>
#include <complex/complex.hpp>
#include<stdexcept>


Queuelst::Queuelst(const Queuelst& src) noexcept {
	if (src.head != nullptr) {
		beg = src.beg;
		head = new Node{ src.head->val,src.head->next };
		Node* temp = new Node{ src.head->val,src.head->next };
		while (temp->next != nullptr) {
			tail = head;
			head = new Node{ temp->head->val,temp->head->next };
			temp = head->next;
		}
	}
	else {
		head = nullptr;
	}

}

Queuelst::IsEmpty() {
	return head == nullptr;
}


Queuelst::Queuelst(QueueLst&& src) noexcept
	: head(src.head), tail(src.tail),beg(src.beg) {
	src.head = nullptr;
	src.tail = nullptr;
	src.beg = nullptr;
}

Queuelst& Queuelst::operator=(QueueLst&& src) noexcept {
	if (this != &src) {
		std::swap(head_, src.head_);
		std::swap(tail_, src.tail_);
	}
	return *this;
}
Queuelst::top() {
	if (IsEmpty()) {
		throw std::logic_error("QUEUELST IS EMPTY U DONKEY");
	}
	return head->val;
}

Queuelst::pop() {
	if (IsEmpty) {
		tail = nullptr
	}
	else {
		del = head;
		head = tail;
		delete del;
	}

}


Queuelst::back(){
	if (IsEmpty()) {
		throw std::logic_error("QUEUELST IS EMPTY U DONKEY");
	}
	else {
		return beg;
	}
}

Queuelst::clear() {
	while (!IsEmpty()) {
		pop();
	}
}
Queuelst::push(Complex& val) {
	if (IsEmpty()) {
		head = new Node{ val,nullptr };
		tail = head;
		beg = head;
	}
	else {
		tail = head;
		head = new Node{ val,nullptr };
		
	}

}
