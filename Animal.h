#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
    protected:
        int dna_size;
        std::string* p_dna;
        virtual void voice() = 0;
        virtual void move() = 0;
    public:
        Animal();
        Animal(int);
        Animal (const Animal&);
        Animal& operator = (const Animal&);
        virtual ~Animal();
};

#endif