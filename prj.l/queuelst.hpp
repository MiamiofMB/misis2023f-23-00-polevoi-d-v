
#pragma once
#ifndef QUEUELST_QUEUELST_HPP_20240220
#define QUEUELST_QUEUELST_HPP_20240220

#include <complex/complex.hpp>

#include <cstddef>

class Queuelst{
public:
  Queuelst() = default;
  Queuelst(&Queuelst src const);
  Queuelst(&&Queuelst src) noexcept;
  ~Queuelst();
  QueueLst& operator=(const QueueLst& src);

  QueueLst& operator=(QueueLst&& src) noexcept;

  void clear() noexcept;
  void pop() const;
  Complex& top() const;
  bool isEmpty() noexcept const;
  

private:
  Node{
    Complex val = 0;
    Node* next = nullptr;
  }
  Node* tail_ = nullptr;
  Node* head_ = nullptr;
};










#endif
