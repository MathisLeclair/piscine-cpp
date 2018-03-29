#include "FragTrap.hpp"

int main(void){

    FragTrap robot;
    FragTrap robot2("Boite de conserve");
    FragTrap robot3;

    robot3 = robot2;

    std::cout << "robot 3 = robot 2, name=" << robot3.getName() << std::endl;

    robot.vaulthunter_dot_exe("enemie1");
    robot.vaulthunter_dot_exe("enemie2");
    robot.vaulthunter_dot_exe("enemie3");
    robot.vaulthunter_dot_exe("enemie4");
    robot.vaulthunter_dot_exe("enemie5");

    robot2.rangedAttack("Enemie 666");
    robot2.meleeAttack("Boule");

    robot2.takeDamage(20);
    robot2.beRepaired(50);


}
