/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:04:30 by ibettenc          #+#    #+#             */
/*   Updated: 2026/04/14 16:53:34 by ibettenc         ###   ########.fr       */
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
}

Cat::Cat& operator=(const Cat& other)
{
    cout << "Cat copy assignment constructor called" << endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

Cat::~Cat()
{
    cout << "Cat destructor called" << endl;
}

void Cat::makeSound() const 
{
    cout << "Moew meow !" << endl; 
}