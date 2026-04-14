/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:59:18 by ibettenc          #+#    #+#             */
/*   Updated: 2026/04/14 16:53:43 by ibettenc         ###   ########.fr       */
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
}

Dog::Dog& operator=(const Dog& other)
{
    cout << "Dog copy assignment constructor called" << endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

Dog::~Dog()
{
    cout << "Dog destructor called" << endl;
}

void Dog::makeSound() const 
{
    cout << "Waf waf !" << endl; 
}