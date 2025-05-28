/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:01:05 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/27 14:04:54 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
WrongCat::WrongCat()
    : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat has been created" << std::endl;
}
WrongCat::~WrongCat() 
{
    std::cout << "WrongCat has been destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "w̶r̶o̶n̶g̶  🅜🅘🅐🅤🅤🅤🅤🅤🅤 " << std::endl;
}


