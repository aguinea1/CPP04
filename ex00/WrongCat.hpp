/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:00:06 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/27 14:12:25 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP
# include <iostream>
# include <new>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		    WrongCat();
			~WrongCat();
			void makeSound() const;
};
#endif

