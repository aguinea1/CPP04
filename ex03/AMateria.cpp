/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:19:22 by aguinea           #+#    #+#             */
/*   Updated: 2025/06/06 15:21:57 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("AMateria") 
{

}

AMateria::AMateria(std::string const &type) : _type(type) 
{

}

AMateria::AMateria(AMateria const &copy)
{
    *this = copy;
}

AMateria &AMateria::operator=(AMateria const &copy) 
{
    if (this != &copy) {
        this->_type = copy._type;
    }
    return *this;
}

AMateria::~AMateria(void) 
{
    // std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const 
{
    return this->_type;
}

void AMateria::use(ICharacter& target) 
{
    (void)target; // Evita warnings por no usar el parámetro
    // Método base no hace nada
}
