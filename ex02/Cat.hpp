/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:44:16 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/28 16:52:55 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP
# include <iostream>
# include <new>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : virtual public Animal
{
	private:
		Brain*	brain;
	public:
		    Cat();
			~Cat();
			void makeSound() const;
			void setBrainIdea(int i, const std::string& idea);
			std::string GetBrainIdea(int i);
			Cat(const Cat& other);
			Cat& operator=(const Cat& other);

};
#endif


