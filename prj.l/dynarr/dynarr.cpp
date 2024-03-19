#include <cstddef>
#include<iostream>
#include<dynarr/dynarr.hpp>

dynarr::dynarr(const dynarr& nw) { std::swap(size, nw.size);std::swap(data, nw.data);std::swap(capacity, nw.capacity);}

dynarr::
