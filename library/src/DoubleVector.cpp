#include "DoubleVector.hpp"

#include <iostream>

DoubleVector::DoubleVector(int size) : data_(new double[size]), size_(size)
{
    for(int i=0; i<size_; i++)
    {
        data_[i] = 0.0;
    }
}

DoubleVector::~DoubleVector()
{
    delete[] data_;
}