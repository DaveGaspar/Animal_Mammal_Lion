#include "Animal.h"
#include "Mammal.h"
#include "Lion.h"

int main(){
    std::cout << "Animal::count = " << Animal::count << std::endl;

    Lion lion_1(3,45,17,26,Animal::color::red);
    Lion lion_2(5,64,15,23,Animal::color::yellow);

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

    std::cout << "Animal::count = " << Animal::count << std::endl;
    std::cout << std::endl;
    
    std::cout << "Converter: " << Animal::enum_to_string(lion_1.get_animal_color()) << std::endl;
    std::cout << std::endl;
    
    lion_2.set_animal_color(Animal::string_to_enum("black"));
    std::cout << "Converter: " << Animal::enum_to_string(lion_2.get_animal_color()) << std::endl;
    std::cout << std::endl;

    return 0;
}