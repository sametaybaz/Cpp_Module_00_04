
#include "Zombie.hpp"

# define N 4

int main()
{ 
    Zombie *zombies = zombieHorde(N,"zombi");

    for (int i = 0; i < N ; i++)
        zombies[i].announce();

    delete [] zombies;
    
    return(0);
}
