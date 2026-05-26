/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:49:33 by ibettenc          #+#    #+#             */
/*   Updated: 2026/04/14 16:53:23 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    cout << "Animal constructor called" << endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &other)
{
    cout << "Animal copy constructor called" << endl;
    this->type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
    cout << "Animal copy assignment constructor called" << endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

Animal::~Animal()
{
    cout << "Animal destructor called" << endl;
}

string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    cout << "Generic animal sound" << endl;
}