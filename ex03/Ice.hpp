/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:19:16 by aguinea           #+#    #+#             */
/*   Updated: 2025/06/06 15:23:02 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
# define Ice_HPP
# include <iostream>
# include <new>
# include <string>
# include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
    Ice(void);
    Ice(Ice const & copy);
    Ice & operator=(Ice const & copy);
    virtual ~Ice(void);

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif

