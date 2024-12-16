// test.cpp
#include <iostream>
#include <cassert>
#include "utils/Hero.hpp"

int main() {
    // Test Case 1: Create two Hero objects
    Hero knight("Richard", 50, 50, 25, "Sword");
    Hero enemy("Rascal", 40, 15, 10, "Bow and Arrow");

    // Test Case 2: Knight attacks Rascal
    knight.strike(enemy);
    enemy.info();

    enemy.strike(knight);
    knight.info();

    enemy.strike(knight);
    knight.info();

    return 0;
}