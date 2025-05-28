/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:38:33 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/28 17:13:03 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    : Animal("Dog")
{
	brain = new Brain;
    std::cout << "Dog has been created" << std::endl;
}

Dog::Dog(const Dog& other)
	:Animal(other)
{
    brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) 
{
    if (this != &other) {
		 Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}
Dog::~Dog() 
{
	delete brain;
    //std::cout << "Dog has been destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "🅖🅤🅐🅤🅤🅤🅤🅤🅤" << std::endl;
}

void Dog::setBrainIdea(int i, const std::string& idea)
{
	brain->setIdea(i, idea);
}

std::string Dog::GetBrainIdea(int i)
{
	return brain->getIdea(i);
}
