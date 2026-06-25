/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:04:30 by ibettenc          #+#    #+#             */
/*   Updated: 2026/06/25 16:49:41 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain); // deep copy
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain); // deep copy
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const 
{
    std::cout << "Moew meow !" << std::endl; 
}

void Cat::setIdea(int index, std::string idea)
{
    if (brain)
        brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    if (brain)
        return brain->getIdea(index);
    return "";
}