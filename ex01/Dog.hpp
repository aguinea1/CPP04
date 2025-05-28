/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:23:33 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/28 16:45:57 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP
# include <iostream>
# include <new>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal
{
	private:
		Brain*	brain;
	public:
		    Dog();
			~Dog();
			Dog& operator=(const Dog& other);
			Dog(const Dog& other);
			void makeSound() const;
			void setBrainIdea(int i, const std::string& idea);
			std::string GetBrainIdea(int i);
};
#endif

