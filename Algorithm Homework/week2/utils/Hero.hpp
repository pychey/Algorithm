#include <iostream>
#include <string>

using namespace std;

class Hero{

    private:
        string name;
        int health;
        int armor;
        int power;
        string weapon;
    public:
        // Define the constructor and methods here ...
        Hero(string name, int health, int armor, int power, string weapon){
            this->name = name;
            this->health = health;
            this->armor = armor;
            this->power = power;
            this->weapon = weapon;
        }
    
        void info(){
            cout << "Name: " << name << endl;
            cout << "Health: " << health << endl;
            cout << "Armor: " << armor << endl;
            cout << "Power:" << power << endl;
            cout << "Weapon: " << weapon << endl;
        }

        void strike(Hero& enemy){
            if(enemy.armor >= power){
                enemy.armor -= power;
            } else {
                enemy.health = enemy.health - (power-enemy.armor);
                enemy.armor = 0;
            }
        }

        // getter methods
        int getHealth() const {
            // this won't error when you create the health attribute
            return health;
        }

        int getArmor() const {
            // this won't error when you create the armor attribute
            return armor;
        }
};