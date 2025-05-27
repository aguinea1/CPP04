/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:55:38 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/27 13:58:37 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WrongAnimal has been created"<<std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal has been destroyed" <<std::endl;
}
std::string WrongAnimal::getType() const
{
	return this->type;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal SOUND!!" << std::endl;
}
void WrongAnimal::setType(std::string newtype)
{
	this->type = newtype;
}
