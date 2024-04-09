#include <cstddef>
#include<iostream>
#include<stdexcept>
#include<dynarr/dynarr.hpp>


Dynarr::Dynarr(int size_){
  size=size_;
  capacity = 0;
  float* temp = new float[size];
  data=temp;
}


Dynarr::Dynarr(dynarr&& nw) noexcept { std::swap(size, nw.size);std::swap(data, nw.data);std::swap(capacity, nw.capacity);return *this;}

Dyanrr::Dynarr(dynarr& nw){
  if (nw.size<=size){
    capacity = nw.size;
  }
  else{
    capacity = size;
  }
  float* temp = new float[nw.size]{0};
  std::copy(data,data+nw.size,temp);
  size = nw.size;
  delete data;
  data = temp;
  temp = null_ptr;
   
  return *this;

  
}



float Dynarr::operator[] (int indx) {
  if(indx >0 and indx<size){
    return data[indx];
  }
  else{throw std::invalid_argument("array index out of range");}
}
void dynarr::push_back(float ins){
  dynarr::resize(size+1);
  data[size-1] = ins;
}
void Dynarr::resize(int new_size) const{
  if (new_size<=0){
    throw std::invalid_argument("Size can't be a negative value,you donkey!");
  }
  
  if (new_size<=size){
    size= new_size;
  }
  else{
    float* temp = new float[new_size]{0};
    std::copy(data,data+size,temp);
    delete data;
    data = temp;
    temp = nullptr;
    capacity = size;
    size = new_size;
    }
}
int Dynarr::size(){return size;}
