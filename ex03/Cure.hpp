/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:40:20 by aguinea           #+#    #+#             */
/*   Updated: 2025/06/06 15:24:01 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP
# include <iostream>
# include <new>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:
    Cure(void);
    Cure(Cure const & copy);
    Cure & operator=(Cure const & copy);
    virtual ~Cure(void);

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif
