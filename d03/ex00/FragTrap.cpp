#include "FragTrap.hpp"

FragTrap::FragTrap():_hitpoint(100),_maxHitpoint(100),_Energy(100),_maxEnergy(100),_level(100),_name("ClapTrap"),_mDamage(30),_rDamage(20),_armorDamageReduc(5){
    std::cout << "<" << this->getName() << "> Yes. Remember what? Are... are you my father? " << std::endl <<" Are you god? Am I dead?" << std::endl << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap::FragTrap(std::string name):_hitpoint(100),_maxHitpoint(100),_Energy(100),_maxEnergy(100),_level(100),_name(name),_mDamage(30),_rDamage(20),_armorDamageReduc(5){
    std::cout << "start bootup sequence.<" << this->getName() << "> Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(FragTrap & src){
    std::cout << "start bootup sequence.<" << this->getName() << "> Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
    *this = src;
}

FragTrap::~FragTrap(){
    std::cout << "<" << this->getName() << "> I'll die the way I lived: annoying!" << std::endl;
}


void FragTrap::rangedAttack(std::string const & target){
    std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->_rDamage << "> points of damage !" << std::endl;
    std::cout << "<" << this->getName() << "> Is it dead? Can, can I open my eyes now?" << std::endl;
}
void FragTrap::meleeAttack(std::string const & target){
    std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at melee, causing <" << this->_mDamage << "> points of damage !" << std::endl;
    std::cout << "<" << this->getName() << "> Take that!" << std::endl;
}
void FragTrap::takeDamage(unsigned int amount){
    std::cout << "FR4G-TP <" << this->getName() << "> receive attack, causing <" << amount << "> points of damage !" << std::endl;
    std::cout << "<" << this->getName() << "> I can't feel my fingers! Gah! I don't have any fingers!" << std::endl;

    this->_hitpoint -= amount - this->_armorDamageReduc;
    this->_hitpoint = this->_hitpoint > 0 ? this->_hitpoint : 0;
    std::cout << "FR4G-TP <" << this->getName() << "> The robot is dead, long live the robot! <" << std::endl;
}
void FragTrap::beRepaired(unsigned int amount){
    std::cout << "FR4G-TP <" << this->getName() << "> is repaired, causing <" << amount << "> points of health gained !" << std::endl;
    std::cout << "<" << this->getName() << "> You're the wub to my dub!" << std::endl;

    if (amount + this->_hitpoint >= this->_maxHitpoint)
        this->_hitpoint = this->_maxHitpoint;
    else
        this->_hitpoint += amount;
}


int FragTrap::getHitpoint() const {
    return this->_hitpoint;
}
int FragTrap::getEnergy() const {
    return this->_Energy;
}
int FragTrap::getlevel() const {
    return this->_level;
}
int FragTrap::getmDamage() const {
    return this->_mDamage;
}
int FragTrap::getrDamage() const {
    return this->_rDamage;
}
std::string FragTrap::getName() const {
    return this->_name;
}


void FragTrap::vaulthunter_dot_exe(std::string const & target){
    if (this->_Energy >= 25)
    {
        std::cout << "FR4G-TP <" << this->getName() << "> launch an attack using 25 energy, causing <" << this->getrDamage() << "> points of damage at <"<< target << "> !" << std::endl;
        srand(time(NULL));
        int choice = rand() % 6;

        if (choice == 0)
            std::cout  << "FR4G-TP <" << this->getName() << "> Take two bullets, then call me in the morning." << std::endl;
        else if (choice == 1)
            std::cout  << "FR4G-TP <" << this->getName() << "> I'm a tornado of death and bullets!" << std::endl;
        else if (choice == 2)
            std::cout  << "FR4G-TP <" << this->getName() << "> You're listening to 'Short-Range Damage Radio.'" << std::endl;
        else if (choice == 3)
            std::cout  << "FR4G-TP <" << this->getName() << "> I'd do anything for a woman with a gun." << std::endl;
        else if (choice == 4)
            std::cout  << "FR4G-TP <" << this->getName() << "> This time it'll be awesome, I promise!" << std::endl;
        else if (choice == 5)
            std::cout  << "FR4G-TP <" << this->getName() << "> Look out everybody, things are about to get awesome!" << std::endl;
        this->_Energy -= 25;
    }
    else
        std::cout  << "FR4G-TP <" << this->getName() << "> Ahem, ahem. What's going on? Did I break something?" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src){
    this->_hitpoint = src._hitpoint;
    this->_maxHitpoint = src._maxHitpoint;
    this->_Energy = src._Energy;
    this->_maxEnergy = src._maxEnergy;
    this->_level = src._level;
    this->_mDamage = src._mDamage;
    this->_rDamage = src._rDamage;
    this->_armorDamageReduc = src._armorDamageReduc;
    this->_name = src._name;

    return *this;
}
