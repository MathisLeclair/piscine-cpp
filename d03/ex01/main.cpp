#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void){

    FragTrap robot;
    ScavTrap robot2("Boite de conserve");


    robot.vaulthunter_dot_exe("enemie1");
    robot.vaulthunter_dot_exe("enemie2");

    robot2.rangedAttack("Enemie 666");
    robot2.meleeAttack("Boule");

    robot2.takeDamage(20);
    robot2.beRepaired(50);

    robot2.challengeNewcomer();


}
