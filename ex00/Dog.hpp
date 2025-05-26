/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:23:33 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 21:00:30 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP
# include <iostream>
# include <new>
# include <string>
# include "Animal.hpp"

class Dog : virtual public Animal
{
	public:
		    Dog();
			~Dog();
			void makeSound() const;
};
#endif

