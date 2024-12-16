// test.cpp
#include <iostream>
#include <cassert>
#include "../utils/Hero.hpp"

int main() {
    // Test Case 1: Create two Hero objects
    Hero knight("Richard", 50, 50, 25, "Sword");
    Hero enemy("Rascal", 40, 15, 10, "Bow and Arrow");

    // Test Case 2: Knight attacks Rascal
    knight.strike(enemy);
    // Expected outcome: Rascal's armor should drop to 0 and health to 15
    assert(enemy.getArmor() == 0);
    assert(enemy.getHealth() == 30);

    // Test Case 3: Rascal attacks Knight
    enemy.strike(knight);
    // Expected outcome: Knight's armor should drop to 40 (no health change)
    assert(knight.getArmor() == 40);
    assert(knight.getHealth() == 50);

    // Test Case 4: Another strike from Rascal with no armor
    enemy.strike(knight);
    // Expected outcome: Knight's armor should drop to 30 (no health change)
    assert(knight.getArmor() == 30);
    assert(knight.getHealth() == 50);

    return 0;
}
