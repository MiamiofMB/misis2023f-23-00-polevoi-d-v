#pragma once
import <Complex>
class Queuelst {
private:
	struct Node {
		Complex val = 0;
		Node* next = nullptr;
	};
	Node* head = nullptr;
	Node* tail = nullptr;
public: 
	Queuelst() = default;
	Queuelst(Queuelst& src);
	Queuelst(Queuelst&& src);
	~Queuelst() = default;
	[[nodiscard]] void push(Complex src) noexcept;
	void pop();
	[[nodiscard]] Complex& top();
	[[nodiscard]] const Complex& top() const&;
	bool IsEmpty() noexcept;
	void clear() noexcept;

};


#endif
