#include "Zombie.hpp"

int main( void ) {
    std::cout << "Creating zombie on the stack." << std::endl;
    Zombie zombi1;
    zombi1.setName("Stack Samet");
    zombi1.announce();
   
    std::cout << "Creating zombie on the heap." << std::endl;
    Zombie *zombi2 = newZombie("Heap Samet");
    zombi2->announce();
    delete zombi2;
    
    std::cout << "Calling randomChump()." << std::endl;
    randomChump("randomChump Samet");
    return 0;
}