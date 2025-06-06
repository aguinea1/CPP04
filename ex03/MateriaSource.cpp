/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:43:20 by aguinea           #+#    #+#             */
/*   Updated: 2025/06/06 15:43:36 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i)
		_templates[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const & copy) {
	*this = copy;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & copy) {
	if (this != &copy) {
		for (int i = 0; i < 4; ++i) {
			if (_templates[i])
				delete _templates[i];
			_templates[i] = copy._templates[i] ? copy._templates[i]->clone() : nullptr;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i)
		delete _templates[i];
}

void MateriaSource::learnMateria(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; ++i) {
		if (!_templates[i]) {
			_templates[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; ++i) {
		if (_templates[i] && _templates[i]->getType() == type)
			return _templates[i]->clone();
	}
	return nullptr;
}

