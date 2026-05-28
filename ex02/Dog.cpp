/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:59:18 by ibettenc          #+#    #+#             */
/*   Updated: 2026/05/28 15:23:49 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    cout << "Dog constructor called" << endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
    cout << "Dog copy constructor called" << endl;
    this->type = other.type;
    this->brain = new Brain(*other.brain); // deep copy
}

Dog& Dog::operator=(const Dog& other)
{
    cout << "Dog copy assignment constructor called" << endl;
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain); // deep copy
    }
    return *this;
}

Dog::~Dog()
{
    cout << "Dog destructor called" << endl;
    delete brain;
}

void Dog::makeSound() const 
{
    cout << "Waf waf !" << endl; 
}

void Dog::setIdea(int index, string idea)
{
    if (brain)
        brain->setIdea(index, idea);
}

string Dog::getIdea(int index) const
{
    if (brain)
        return brain->getIdea(index);
    return "";
}
