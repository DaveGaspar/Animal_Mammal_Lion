#ifndef LION_H
#define LION_H

#include "Mammal.h"

class Lion:public Mammal{
    protected:
        int mane_size;
        int* p_mane;
        void voice() final;
    public:
        Lion();
        Lion(int,int,int,int);
        Lion (const Lion&);
        Lion& operator = (const Lion&);
        ~Lion() final;
        void operator()();
};

#endif