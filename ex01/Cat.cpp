/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:39:34 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 20:59:47 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat()
    : Animal("Cat")
{
    std::cout << "Cat has been created" << std::endl;
}
Cat::~Cat() {
    std::cout << "Cat has been destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "🅜🅘🅐🅤🅤🅤🅤🅤🅤" << std::endl;
}

