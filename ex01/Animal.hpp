/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:19:14 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 20:58:32 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
# define Animal_HPP
# include <iostream>
# include <new>
# include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(std::string type);
		Animal();
		virtual ~Animal();
		std::string getType();
		virtual void makeSound() const;
		std::string getType() const;
};
#endif
