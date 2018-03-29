#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void){

    ClapTrap clapTrap;
    FragTrap fragTrap("fragTrap");
    ScavTrap scavTrap("scavTrap");
    NinjaTrap ninjaTrap("ninjaTrap");


    std::cout << std::endl << "sragTrap VaultHunter" << std::endl;
    fragTrap.vaulthunter_dot_exe("enemie1");
    std::cout << std::endl;
    fragTrap.vaulthunter_dot_exe("enemie2");

    std::cout << std::endl << "scavTrap attack" << std::endl;
    scavTrap.rangedAttack("Enemie 666");
    std::cout << std::endl;
    scavTrap.meleeAttack("Boule");

    std::cout << std::endl << "scavTrap ChallengeNewcomer" << std::endl;
    scavTrap.challengeNewcomer();

    std::cout << std::endl << "sragTrap TakeDamage/repaired" << std::endl;
    fragTrap.takeDamage(20);
    std::cout << std::endl;
    fragTrap.beRepaired(50);

    std::cout << std::endl << "ninjaTrap ninjaShoebox tout le monde" << std::endl;
    ninjaTrap.ninjaShoebox(clapTrap);
    std::cout << std::endl;
    ninjaTrap.ninjaShoebox(fragTrap);
    std::cout << std::endl;
    ninjaTrap.ninjaShoebox(scavTrap);
    std::cout << std::endl;
    ninjaTrap.ninjaShoebox(ninjaTrap);
    std::cout << std::endl;
    std::cout << std::endl;

}
