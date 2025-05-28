/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:54:20 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/27 14:13:53 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <new>
# include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(std::string type);
		WrongAnimal();
		virtual ~WrongAnimal();
		std::string getType();
		virtual void makeSound() const;
		std::string getType() const;
		void setType(std::string newtype);
};
#endif

