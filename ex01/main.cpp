/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:30:55 by ibettenc          #+#    #+#             */
/*   Updated: 2026/06/25 15:28:41 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "--- Test Animal ---" << std::endl;

    // 1. Allocation dynamique avec pointeur de base (Animal*)
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // Affichage des types
    std::cout << j->getType() << std::endl; // "Dog"
    std::cout << i->getType() << std::endl; // "Cat"

    // Appel des sons
    i->makeSound(); // "Meow meow !"
    j->makeSound(); // "Waf waf !"
    meta->makeSound(); // "Generic animal sound"

    // METTRE DES TESTS POUR BRAIN
    // ...
    
    // Nettoyage mémoire
    delete meta;
    delete j;
    delete i;
}