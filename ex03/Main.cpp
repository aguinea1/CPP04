/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:52:21 by aguinea           #+#    #+#             */
/*   Updated: 2025/06/06 15:48:56 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void printSeparator(std::string title) {
	std::cout << "\n=========== " << title << " ===========\n" << std::endl;
}

int main() {
	printSeparator("TEST 1: Crear y usar materias directamente");
	{
		Ice ice;
		Cure cure;

		Character dummy("Dummy");
		ice.use(dummy);
		cure.use(dummy);
	}

	printSeparator("TEST 2: Clonado de materias");
	{
		Ice original;
		AMateria* clone = original.clone();

		Character dummy("CloneTarget");
		clone->use(dummy);

		delete clone;
	}

	printSeparator("TEST 3: MateriaSource aprende y clona materias");
	{
		MateriaSource src;
		src.learnMateria(new Ice());
		src.learnMateria(new Cure());

		AMateria* m1 = src.createMateria("ice");
		AMateria* m2 = src.createMateria("cure");
		AMateria* m3 = src.createMateria("fire"); // tipo no existente

		std::cout << "m1 type: " << (m1 ? m1->getType() : "null") << std::endl;
		std::cout << "m2 type: " << (m2 ? m2->getType() : "null") << std::endl;
		std::cout << "m3 type: " << (m3 ? m3->getType() : "null") << std::endl;

		delete m1;
		delete m2;
	}

	printSeparator("TEST 4: Character equipa y usa materias");
	{
		MateriaSource src;
		src.learnMateria(new Ice());
		src.learnMateria(new Cure());

		Character me("Player1");
		AMateria* tmp;

		tmp = src.createMateria("ice");
		me.equip(tmp);

		tmp = src.createMateria("cure");
		me.equip(tmp);

		Character enemy("Enemy");

		me.use(0, enemy); // usa ice
		me.use(1, enemy); // usa cure
		me.use(2, enemy); // no hay materia
	}

	printSeparator("TEST 5: Unequip no borra memoria automáticamente");
	{
		MateriaSource src;
		src.learnMateria(new Ice());
		src.learnMateria(new Cure());

		Character hero("Hero");
		AMateria* ice = src.createMateria("ice");
		hero.equip(ice);
		hero.unequip(0);

		delete ice;
	}

	printSeparator("TEST 6: Copia profunda de Character");
	{
		Character original("Original");
		original.equip(new Ice());
		original.equip(new Cure());

		Character copy = original; // se prueba operador de copia

		Character target("Target");

		copy.use(0, target); // debe usar Ice
		copy.use(1, target); // debe usar Cure
	}

	return 0;
}

