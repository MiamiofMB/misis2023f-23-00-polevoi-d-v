#include <cstddef>
#include<iostream>
#include<stdexcept>
#include<dynarr/dynarr.hpp>

dynarr::dynarr(const dynarr& nw) { std::swap(size, nw.size);std::swap(data, nw.data);std::swap(capacity, nw.capacity);}

float dynarr::operator[] (int indx) {
  if(indx >0 and indx<size){
    return data[indx];
  }
  else{throw std::invalid_argument("array index out of range");}
}
void dynarr::push_back(float ins){
    size+=1;
    capacity+=1;
    float* temp = new float[size];
    for (int i=0; i<size;i++){
      temp[i] = size[i];
    } 
    temp[size-1] = ins;
    delete data;
    data = temp;
    temp = nullptr;
}
void dynarr::resize(int new_size) const{
  if (new_size<=0){
    throw std::invalid_argument("Size can't be a negative value,you donkey!");
  }
  
  if (new_size<size){
    size= new_size;
  }
  else{
    capacity = 0;
    float* temp = new float[new_size]{0};
    for (int i = 0;i<new_size;i++){
      if (i<size){
        temp[i] = data[i];
        capacity+=1;
      }
    }
    delete data;
    data = temp;
    temp = nullptr;
    }
}
int dynarr:size(){return size;}
