#include "Memento.h"
#pragma once

/**
 * The Concrete Memento contains the infrastructure for storing the Originator's
 * state.
 */
class ConcreteMemento : public Memento {
private:
    std::string state_;
    std::string date_;

public:
    ConcreteMemento(std::string state);
    /**
     * The Originator uses this method when restoring its state.
     */
    std::string state() const override;
    /**
     * The rest of the methods are used by the Caretaker to display metadata.
     */
    std::string GetName() const override;
    std::string date() const override;
};