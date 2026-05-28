/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:39:36 by ibettenc          #+#    #+#             */
/*   Updated: 2026/05/26 18:54:37 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    cout << "Brain constructor called" << endl;
    for (int i = 0; i < 100; i++)
    {
        stringstream ss;
        ss << i;
        ideas[i] = "Default idea " + ss.str();
    }
}

Brain::Brain(const Brain& other)
{
    cout << "Brain copy constructor called" << endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    cout << "Brain copy assignment called" << endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    cout << "Brain destructor called" << endl;
}

void Brain::setIdea(int index, string idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}