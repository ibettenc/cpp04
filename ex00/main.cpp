/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:30:55 by ibettenc          #+#    #+#             */
/*   Updated: 2026/06/25 15:29:32 by ibettenc         ###   ########.fr       */
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

    // Nettoyage mémoire
    delete meta;
    delete j;
    delete i;

    std::cout << "\n--- Test WrongAnimal / WrongCat ---" << std::endl;
    
    const WrongAnimal* wrong_cat = new WrongCat();
    std::cout << wrong_cat->getType() << std::endl; // "WrongCat"
    wrong_cat->makeSound(); // "WrongAnimal sound" (hérité)

    delete wrong_cat;
}