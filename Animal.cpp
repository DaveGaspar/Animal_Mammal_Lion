#include "Animal.h"

int Animal::count = 0;

std::string Animal::enum_to_string(color c){
    switch (c)
    {
    case Animal::color::red:
        return "red";
    case Animal::color::green:
        return "green";
    case Animal::color::blue:
        return "blue";
    case Animal::color::yellow:
        return "yellow";
    case Animal::color::black:
        return "black";
    }
    return 0;
}

Animal::Animal():dna_size(5),weight(35),animal_color(yellow){
    Animal::count++;
    p_dna = new std::string[dna_size];
}

Animal::Animal(int size,int weight,color(c)):dna_size(size),weight(weight),animal_color(c){
    Animal::count++;
    p_dna = new std::string[dna_size];
}

Animal::Animal (const Animal& obj){
    Animal::count++;
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

Animal::color Animal::get_animal_color(){
    return animal_color;
}