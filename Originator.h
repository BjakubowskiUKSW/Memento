#pragma once
#include "ConcreteMemento.h"

/**
 * The Originator holds some important state that may change over time. It also
 * defines a method for saving the state inside a memento and another method for
 * restoring the state from it.
 */
class Originator {
    /**
     * @var string For the sake of simplicity, the originator's state is stored
     * inside a single variable.
     */
private:
    std::string state_;

    std::string GenerateRandomString(int length = 10);
public:
    Originator(std::string state);
    /**
     * The Originator's business logic may affect its internal state. Therefore,
     * the client should backup the state before launching methods of the business
     * logic via the save() method.
     */
    void DoSomething();

    /**
     * Saves the current state inside a memento.
     */
    Memento* Save();
    /**
     * Restores the Originator's state from a memento object.
     */
    void Restore(Memento* memento);
};