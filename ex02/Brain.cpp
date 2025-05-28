/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:18:17 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/28 17:15:47 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
Brain::Brain()
{
	std::cout << "Brain created "<< std::endl;
}
Brain::~Brain()
{
	std::cout << "Brain destroyed"<< std::endl;
}
Brain::Brain(const Brain& other) 
{
    for (int i = 0; i < 100; ++i) 
	{
        idea[i] = other.idea[i];
    }
}

Brain& Brain::operator=(const Brain& other) 
{
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            idea[i] = other.idea[i];
        }
    }
    return *this;
}
void Brain::setIdea(int i, const std::string& idea)
{
	if (i >= 0 && i < 100)
		this->idea[i] = idea;
	return ;
}
std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return this->idea[i];
	else
		return this->idea[0];
}
