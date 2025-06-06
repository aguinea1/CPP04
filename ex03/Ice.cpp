/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:48:25 by aguinea           #+#    #+#             */
/*   Updated: 2025/06/06 15:23:46 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    // std::cout << "Ice default constructor called" << std::endl;
}

// Constructor de copia
Ice::Ice(Ice const & copy) : AMateria(copy)
{
    // std::cout << "Ice copy constructor called" << std::endl;
}

Ice & Ice::operator=(Ice const & copy)
{
    if (this != &copy)
    {
        AMateria::operator=(copy);
    }
    return *this;
}

Ice::~Ice(void)
{
    // std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " 
              << target.getName() 
              << " *" 
              << std::endl;
}

