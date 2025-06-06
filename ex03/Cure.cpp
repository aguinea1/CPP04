/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:50:59 by aguinea           #+#    #+#             */
/*   Updated: 2025/06/06 15:24:39 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const & copy) : AMateria(copy)
{
}

Cure & Cure::operator=(Cure const & copy)
{
    if (this != &copy)
    {
        AMateria::operator=(copy);
    }
    return *this;
}

Cure::~Cure(void)
{
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " 
              << target.getName() 
              << "'s wounds *" 
              << std::endl;
}
