/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:38:54 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/28 16:49:03 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP
# include <iostream>
# include <new>
# include <string>

class Brain
{
	private:
		std::string idea[100];
	public:
		    Brain();
			~Brain();
			Brain(const Brain& other);
			Brain& operator=(const Brain& other);
			void setIdea(int i, const std::string& idea);
			std::string getIdea(int i) const;
};
#endif

