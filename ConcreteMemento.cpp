#include "ConcreteMemento.h"
#pragma warning( disable : 4996 )

ConcreteMemento::ConcreteMemento(std::string state) : state_(state) {
    this->state_ = state;
    std::time_t now = std::time(0);
    this->date_ = std::ctime(&now);
}

std::string ConcreteMemento::state() const {
    return this->state_;
}

std::string ConcreteMemento::GetName() const {
    return this->date_ + " / (" + this->state_.substr(0, 9) + "...)";
}

std::string ConcreteMemento::date() const {
    return this->date_;
}