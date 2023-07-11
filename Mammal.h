#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal:public Animal{
    protected:
        int hair_size;
        std::string* p_hair;
        int mammary_gland;
        void voice() override;
    public:
        Mammal();
        Mammal(int,int,int,color);
        Mammal(const Mammal&);
        Mammal& operator = (const Mammal&);
        Mammal(Mammal&&);
        Mammal& operator=(Mammal&&);
        ~Mammal() override;
        void move() final;
};

#endif