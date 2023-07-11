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
        enum color{
            red,
            green,
            blue,
            yellow,
            black,
            null
        };
        static int count;
        Animal();
        Animal(int,int,color);
        Animal(const Animal&);
        Animal& operator = (const Animal&);
        Animal(Animal&&);
        Animal& operator=(Animal&&);
        virtual ~Animal();
        bool operator < (const Animal&);
        bool operator > (const Animal&);
        void set_animal_color(color);
        color get_animal_color();
        static std::string enum_to_string(color);
        static color string_to_enum(std::string);
    private:
        color m_animal_color;
};

#endif