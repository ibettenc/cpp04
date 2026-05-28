/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:30:55 by ibettenc          #+#    #+#             */
/*   Updated: 2026/05/28 15:24:55 by ibettenc         ###   ########.fr       */
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
    cout << "--- Test Animal ---" << endl;

    // 1. Allocation dynamique avec pointeur de base (Animal*)
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();

    // Affichage des types
    cout << j->getType() << endl; // "Dog"
    cout << i->getType() << endl; // "Cat"

    // Appel des sons
    i->makeSound(); // "Meow meow !"
    j->makeSound(); // "Waf waf !"
    meta->makeSound(); // "Generic animal sound"

    // METTRE DES TESTS POUR BRAIN
    // ...

    // METTRE DES TESTS POUR CLASSE ABSTRAITE
    // ...
    
    // Nettoyage mémoire
    delete meta;
    delete j;
    delete i;
}