/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:40:09 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 19:11:20 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void) {
	Animal		*concept = new Animal();
	Animal		*cat = new Cat();
	Animal		*dog = new Dog();
	WrongAnimal	wrongConcept = WrongCat();
	WrongCat	*tiger = new WrongCat();

	std::cout << std::endl;
	std::cout << concept->getType() << ":\t\t";
	concept->makeSound();
	std::cout << cat->getType() << ":\t\t";
	cat->makeSound();
	std::cout << dog->getType() << ":\t\t";
	dog->makeSound();
	std::cout << wrongConcept.getType() << ":\t";
	wrongConcept.makeSound();
	std::cout << tiger->getType() << ":\t";
	tiger->makeSound();
	std::cout << std::endl;
	
	delete concept;
	delete cat;
	delete dog;
	delete tiger;
	return (0);
}