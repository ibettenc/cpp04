/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:27:58 by ibettenc          #+#    #+#             */
/*   Updated: 2026/04/14 16:54:32 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    cout << "WrongCat constructor called" << endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other)
{
    cout << "WrongCat copy constructor called" << endl;
    this->type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    cout << "WrongCat copy assignment constructor called" << endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongCat::~WrongCat()
{
    cout << "WrongCat destructor called" << endl;
}

// Pas de makeSound() -> héritage de WrongAnimal