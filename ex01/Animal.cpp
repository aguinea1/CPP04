/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:32:23 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 21:03:55 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal has been created" << std::endl;
}
Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal (" << this->type <<") has been created"<<std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal ("<<this->type <<") has been destroyed" <<std::endl;
}
std::string Animal::getType() const
{
	return this->type;
}
void Animal::makeSound() const
{
    std::cout << "GUAU OR MIAU OR  SOMETHING!!!" << std::endl;
}
