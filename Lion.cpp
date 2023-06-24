#include "Lion.h"

void Lion::voice(){
    std::cout << "I'm a lion" << std::endl; 
}

Lion::Lion():mane_size(5){
    p_mane = new int[mane_size];
    voice();
}

Lion::Lion(int size):mane_size(size){
    p_mane = new int[mane_size];
    voice();
}

Lion::Lion (const Lion& obj){
    this->mane_size = obj.mane_size;
    p_mane = new int[mane_size];
    for (int i = 0; i < mane_size; i++)
        this->p_mane = obj.p_mane;
}

Lion& Lion::operator = (const Lion& obj){
    if (this != &obj){
        delete[] this->p_mane;
        p_mane = nullptr;
        this->mane_size = obj.mane_size;
        p_mane = new int[mane_size];
        for (int i = 0; i < mane_size; i++)
            this->p_mane = obj.p_mane;
    }
    return *this;
}

Lion::~Lion(){
    std::cout << "Destructor Lion" << std::endl;
    delete[] p_mane;
    p_mane = nullptr;
}