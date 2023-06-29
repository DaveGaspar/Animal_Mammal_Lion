#include "Animal.h"

Animal::Animal():dna_size(5),weight(35){
    p_dna = new std::string[dna_size];
}

Animal::Animal(int size,int weight):dna_size(size),weight(weight){
    p_dna = new std::string[dna_size];
}

Animal::Animal (const Animal& obj){
    this->weight = obj.weight;
    this->dna_size = obj.dna_size;
    p_dna = new std::string[dna_size];
    for (int i = 0; i < dna_size; i++)
        this->p_dna = obj.p_dna;
}

Animal& Animal::operator = (const Animal& obj){
    if (this != &obj){
        delete[] this->p_dna;
        p_dna = nullptr;
        this->weight = obj.weight;
        this->dna_size = obj.dna_size;
        p_dna = new std::string[dna_size];
        for (int i = 0; i < dna_size; i++)
            this->p_dna = obj.p_dna;
    }
    return *this;
}

bool Animal::operator < (const Animal& obj){
    return this->weight < obj.weight;
}

bool Animal::operator > (const Animal& obj){
    return this->weight > obj.weight;
}

Animal::~Animal(){
    std::cout << "Destructor Animal" << std::endl;
    delete[] p_dna;
    p_dna = nullptr;
}