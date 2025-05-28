/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:39:34 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/28 17:15:14 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
    : Animal("Cat")
{
	brain = new Brain;
    std::cout << "Cat has been created" << std::endl;
}

Cat::Cat(const Cat& other)
	:Animal(other)
{
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other) {
		 Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}
Cat::~Cat()
{
	delete brain;
    //std::cout << "Cat has been destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "🅜🅘🅐🅤🅤🅤🅤🅤🅤" << std::endl;
}

void Cat::setBrainIdea(int i, const std::string& idea)
{
	brain->setIdea(i, idea);
}

std::string Cat::GetBrainIdea(int i)
{
	return brain->getIdea(i);
}

