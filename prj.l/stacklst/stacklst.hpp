
#pragma once
#ifndef STACKLST_STACKLST_HPP_20240213
#define STACKLST_STACKLST_HPP_20240213
#include <complex>

class Stacklst {
private:
	//идея следующая. Стек по сути находится полностью в динамической памяти. 
	// Каждая нода имеет ссылку на ПРЕДЫДУЩИЙ элемент в цепи, а не на следующий, вопреки блять названию next.
	// Танцуя от этого можно воссаздать все нужные функции. По факту в каждый отдельный момент времени stacklst хранит только одно поле,
	// однако все элементы хранятся в динамической памяти и от каждого из них можно добраться до дна стека тк в каждой ноде, повторюсь есть 
	// ссылка на предыдущую ноду. Все, что тебе нужно знать это val нынешней ноды в стеке и ссылку на предыдущую ноду.
	struct Node {
		int64_t val = 0;
		Node* next = nullptr;
	};
	Node* head = nullptr

};
public:
	Stackarr() = default;

	Stackarr(stackarr& s) = default;
	Stackarr(stackarr&& s) = default;

	~Stackarr() { delete data; }

	void pop(); // я не уверен, что нам нужен noexcept тут потому что поп можно взвать от пустого стека что спровоцирует ошибку.

	void push(int64_t indx) noexcept;

	[[nodiscard]] const float& top();

	bool isEmpty() noexcept;

	void clear() noexcept;

};


#endif
