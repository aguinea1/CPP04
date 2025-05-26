/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:44:16 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 21:00:36 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP
# include <iostream>
# include <new>
# include <string>
# include "Animal.hpp"

class Cat : virtual public Animal
{
	public:
		    Cat();
			~Cat();
			void makeSound() const;
};
#endif


