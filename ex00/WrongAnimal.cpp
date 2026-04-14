/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:20:02 by ibettenc          #+#    #+#             */
/*   Updated: 2026/04/14 16:24:13 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    cout << "WrongAnimal constructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    cout << "WrongAnimal copy constructor called" << endl;
    this->type = other.type;
}

WrongAnimal::WrongAnimal& operator=(const WrongAnimal& other)
{
    cout << "WrongAnimal copy assignment constructor called" << endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    cout << "WrongAnimal destructor called" << endl;
}

string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    cout << "Generic Wong Animal sound" << endl;
}