#ifndef LION_H
#define LION_H

#include "Mammal.h"

class Lion:public Mammal{
    public:
        int mane_size;
        int* p_mane;
        void voice() final;
    public:
        Lion();
        Lion(int,int,int,int,color);
        Lion (const Lion&);
        Lion& operator = (const Lion&);
        Lion(Lion&&);
        Lion& operator=(Lion&&);
        ~Lion() final;
        void operator()();
};

#endif