#include "Mammal.h"

void Mammal::voice(){
    std::cout << "I'm a mammal animal" << std::endl;
}

Mammal::Mammal():hair_size(5){
    p_hair = new std::string[hair_size];
    move();
    voice();
}

Mammal::Mammal(int d_size, int weight, int h_size, color c):Animal(d_size,weight,c),hair_size(h_size){
    p_hair = new std::string[hair_size];
    move();
    voice();
}

Mammal::Mammal (const Mammal& obj){
    this->hair_size = obj.hair_size;
    p_hair = new std::string[hair_size];
    for (int i = 0; i < hair_size; i++)
        this->p_hair = obj.p_hair;
}

Mammal& Mammal::operator = (const Mammal& obj){
    if (this != &obj){
        delete[] this->p_hair;
        p_hair = nullptr;
        this->hair_size = obj.hair_size;
        p_hair = new std::string[hair_size];
        for (int i = 0; i < hair_size; i++)
            this->p_hair = obj.p_hair;
    }
    return *this;
}

Mammal::Mammal(Mammal&& obj)
    : Animal(std::move(obj)), hair_size(obj.hair_size), p_hair(obj.p_hair), mammary_gland(obj.mammary_gland)
{
    obj.hair_size = 0;
    obj.p_hair = nullptr;
    obj.mammary_gland = 0;
}

Mammal& Mammal::operator=(Mammal&& obj){
    if (this != &obj){
        delete[] this->p_hair;
        this->hair_size = obj.hair_size;
        this->p_hair = obj.p_hair;
        this->mammary_gland = obj.mammary_gland;
        obj.hair_size = 0;
        obj.p_hair = nullptr;
        obj.mammary_gland = 0;
    }
    return *this;
}

Mammal::~Mammal(){
    std::cout << "Destructor Mammal" << std::endl;
    delete[] p_hair;
    p_hair = nullptr;
}

void Mammal::move(){
    std::cout << "I can walk" << std::endl;
}