/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:04:30 by ibettenc          #+#    #+#             */
/*   Updated: 2026/05/26 18:52:54 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    cout << "Cat constructor called" << endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
    cout << "Cat copy constructor called" << endl;
    this->type = other.type;
    this->brain = new Brain(*other.brain); // deep copy
}

Cat& Cat::operator=(const Cat& other)
{
    cout << "Cat copy assignment constructor called" << endl;
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
    cout << "Cat destructor called" << endl;
    delete brain;
}

void Cat::makeSound() const 
{
    cout << "Moew meow !" << endl; 
}

void Cat::setIdea(int index, string idea)
{
    if (brain)
        brain->setIdea(index, idea);
}

string Cat::getIdea(int index) const
{
    if (brain)
        return brain->getIdea(index);
    return "";
}