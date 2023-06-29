#include "Animal.h"
#include "Mammal.h"
#include "Lion.h"

int main(){
    Lion lion_1(3,45,17,26);
    Lion lion_2(5,64,15,23);

    if (lion_1<lion_2){
        std::cout << "Lion_1 is lighter than lion_2" << std::endl;
    }

    if (lion_1>lion_2){
        std::cout << "Lion_1 is heavier than lion_2" << std::endl;
    }
    std::cout << "\nLion 1:" << std::endl;
    lion_1();
    std::cout << "Lion 2:" << std::endl;
    lion_2();

    std::cout << std::endl;
    return 0;
}