#pragma once
#ifndef QUEUEARR_QUEUEARR_HPP_20240227
#define QUEUEARR_QUEUEARR_HPP_20240227

#include <complex/complex.hpp>

#include <cstddef>


class Queuearr(){
public:
  Queuearr() = default;
  QueueArr(const QueueArr& src);
  QueueArr(QueueArr&& src) noexcept;
  ~Queuearr(){delete[] data;};
  Queuearr& operator==(Queuearr& src);
  bool isEmpty() noexcept;  
  Complex& top() const;
  void push() noexcept;
  void pop();
  void clear() noexcept;
private:
    int64_t size = 0;
    int64_t head = -1;
    int64_t tail = -1;
    Complex* data = nullptr;
}










#endif
