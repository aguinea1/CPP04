/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:18:34 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/28 17:00:16 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
    std::cout << "Creating animals...\n";

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\nDeleting animals...\n";

    delete j; // Should delete Dog and its Brain without memory leak
    delete i; // Should delete Cat and its Brain without memory leak

    std::cout << "\nCreating array of Animals...\n";

    const int size = 4;
    Animal* animals[size];

    for (int k = 0; k < size; ++k) {
        if (k % 2 == 0)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    std::cout << "\nDeleting array of Animals...\n";

    for (int k = 0; k < size; k++) {
        delete animals[k];
    }

    std::cout << "\nTesting deep copy...\n";

    Dog originalDog;
    originalDog.setBrainIdea(0, "I want a bone.");
    Dog copiedDog = originalDog; // Invokes copy constructor

    originalDog.setBrainIdea(0, "Changed idea");

    std::cout << "Original Dog idea: " << originalDog.GetBrainIdea(0) << "\n";
    std::cout << "Copied Dog idea:   " << copiedDog.GetBrainIdea(0) << "\n";

    std::cout << "\nProgram finished without leaks.\n";

    return 0;
}
