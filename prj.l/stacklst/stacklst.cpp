#include <complex>
#include <stacklst/stacklst.hpp>
#include <stdexcept>


Stacklst::Sacklst(Stacklst& ls) {
	clear();
	//очищать ls не нужно тк мы не копируем его в функцию, а берем только ссылку на указатель. Его очисткой займется деструктор
	Node* temp = ls.head;
	while (temp != nullptr) {
		head = new Node{ temp.val,temp.head->next };
		//delete temp;
		temp = temp->next;

	}


}


Stacklst::Sacklst(Stacklst&& ls) {
	std::swap(ls.head, head);
}

void Stacklst::push(int64_t val) {
	head = new Node{ val,head};
}


Complex Stacklst::top() {
	if (head != nullptr) {
		return head->val;
	}
	else {
		throw std::invalid_argument("Stack is fucking empty")
	}
}

bool Stacklst::isEmpty(){
	return head == nullptr;
}

void Stacklst::pop() {
	if (head != nullptr) {
		Node* temp = head->next;
		delete head;
		head = temp;	
	}
	else {
		throw std::invalid_argument("Stack is fucking empty")
	}
}
void Stacklst::clear() {
	while (head != nullptr) {
		Node* temp = head->next;
		delete head;
		head = temp;
	}
}
