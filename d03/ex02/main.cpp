#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void){

    ClapTrap clapTrap;
    FragTrap sragTrap("sragTrap");
    ScavTrap scavTrap("scavTrap");


    sragTrap.vaulthunter_dot_exe("enemie1");
    sragTrap.vaulthunter_dot_exe("enemie2");

    scavTrap.rangedAttack("Enemie 666");
    scavTrap.meleeAttack("Boule");

    sragTrap.takeDamage(20);
    sragTrap.beRepaired(50);

    scavTrap.challengeNewcomer();


}
