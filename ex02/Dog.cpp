/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:59:18 by ibettenc          #+#    #+#             */
/*   Updated: 2026/06/25 16:56:15 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain); // deep copy
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment constructor called" << std::endl;
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
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const 
{
    std::cout << "Waf waf !" << std::endl; 
}

void Dog::setIdea(int index, std::string idea)
{
    if (brain)
        brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    if (brain)
        return brain->getIdea(index);
    return "";
}
