/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:30:55 by ibettenc          #+#    #+#             */
/*   Updated: 2026/04/14 16:50:23 by ibettenc         ###   ########.fr       */
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
    std::cout << "--- Test Polymorphisme Animal ---" << std::endl;

    // 1. Allocation dynamique avec pointeur de base (Animal*)
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // Affichage des types
    std::cout << j->getType() << std::endl; // Doit imprimer "Dog"
    std::cout << i->getType() << std::endl; // Doit imprimer "Cat"

    // Appel polymorphique des sons
    i->makeSound(); // Doit imprimer "Meow!"
    j->makeSound(); // Doit imprimer "Woof!"
    meta->makeSound(); // Doit imprimer "Some generic animal sound"

    // Nettoyage mémoire
    delete meta;
    delete j;
    delete i;

    std::cout << "\n--- Test WrongAnimal / WrongCat ---" << std::endl;
    
    // WrongCat ne doit pas avoir de makeSound() propre, il utilise celui de WrongAnimal
    const WrongAnimal* w_cat = new WrongCat();
    std::cout << w_cat->getType() << std::endl; // Doit imprimer "WrongCat"
    w_cat->makeSound(); // Doit imprimer "WrongAnimal sound" (hérité)

    delete w_cat;
}