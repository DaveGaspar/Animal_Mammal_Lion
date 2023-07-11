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
    case Animal::color::null:
        return 0;
    }
    return 0;
}

Animal::color Animal::string_to_enum(std::string str){
    if (str == "red") return red;
    else if (str == "green") return green;
    else if (str == "blue") return blue;
    else if (str == "yellow") return yellow;
    else if (str == "black") return black;
    return null;
}

Animal::Animal():dna_size(5),weight(35),m_animal_color(yellow){
    Animal::count++;
    p_dna = new std::string[dna_size];
}

Animal::Animal(int size,int weight,color(c)):dna_size(size),weight(weight),m_animal_color(c){
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

Animal::Animal(Animal&& obj)
    : dna_size(obj.dna_size), weight(obj.weight), p_dna(obj.p_dna), m_animal_color(obj.m_animal_color)
{
    obj.dna_size = 0;
    obj.weight = 0;
    obj.p_dna = nullptr;
    obj.m_animal_color = null;
}

Animal& Animal::operator =(Animal&& obj)
{
    if (this != &obj){
        delete[] this->p_dna;
        this->dna_size = obj.dna_size; 
        this->weight = obj.weight;
        this->p_dna = obj.p_dna;
        this->m_animal_color = obj.m_animal_color;

        obj.dna_size = 0;
        obj.weight = 0;
        obj.p_dna = nullptr;
        obj.m_animal_color = null;
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

void Animal::set_animal_color(color c){
    m_animal_color = c;
}

Animal::color Animal::get_animal_color(){
    return m_animal_color;
}