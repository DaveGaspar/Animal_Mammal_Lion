#include "Animal.h"
#include "Mammal.h"
#include "Lion.h"

int main(){
    Animal* l = new Lion(3);
    std::cout << std::endl;
    delete l;
    return 0;
}