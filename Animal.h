#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
    protected:
        int dna_size;
        int weight;
        std::string* p_dna;
        virtual void voice() = 0;
        virtual void move() = 0;
    public:
        static int count;
        Animal();
        Animal(int,int);
        Animal (const Animal&);
        Animal& operator = (const Animal&);
        virtual ~Animal();
        bool operator < (const Animal&);
        bool operator > (const Animal&);
};

#endif