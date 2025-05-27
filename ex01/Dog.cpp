/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:38:33 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 20:59:34 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    : Animal("Dog")
{
    std::cout << "Dog has been created" << std::endl;
}

Dog::~Dog() 
{
    std::cout << "Dog has been destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "🅖🅤🅐🅤🅤🅤🅤🅤🅤" << std::endl;
}

