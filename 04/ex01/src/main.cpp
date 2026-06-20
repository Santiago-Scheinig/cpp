/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:45:14 by sscheini          #+#    #+#             */
/*   Updated: 2026/06/19 20:11:11 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#ifndef ANIMAL_AMOUNT
# define ANIMAL_AMOUNT 3
#endif

const std::string getIdea(int i) {
	if (i % 2)
	{
		if (i < 10)
			return ("This is my territory now! [begins to pee]");
		else if (i < 20)
			return ("Is it time for a walk?!");
		else if (i < 30)
			return ("Wish i could remember where i burried my bone...");
	}
	if (i < 10)
		return ("I love a good nap on the tv!");
	else if (i < 20)
		return ("What you looking dummy? What you looking?");
	return ("Food...Fooooood!...FOOOOOOD!!");
}

/**
 * @brief	Fills a pack of Animals with alternating Cats and Dogs,
 * 			assigns 3 ideas to each, and prints their type and sound.
 *
 * @param	pack	Array of AAnimal pointers to populate.
 */
static void	fillPack(Animal *pack[ANIMAL_AMOUNT]) {
	int	i;

	i = -1;
	while (++i < ANIMAL_AMOUNT)
	{
		if ((i % 2))
			pack[i] = new Dog();
		else
			pack[i] = new Cat();
		pack[i]->setIdea(getIdea(i));
		pack[i]->setIdea(getIdea(10 + i));
		pack[i]->setIdea(getIdea(20 + i));
		std::cout << pack[i]->getType() << ": ";
		pack[i]->makeSound();
		std::cout << std::endl;
	}
}

/**
 * @brief	Prints the thoughts of each Animal in the pack
 * 			by copying their pointers into secondPack and calling think().
 *
 * @param	pack		Source array of AAnimal pointers.
 * @param	secondPack	Destination array — shallow copy of pack pointers.
 */
static void	speakWithAnimals(Animal *pack[ANIMAL_AMOUNT], Animal *secondPack[ANIMAL_AMOUNT]) {
	int	i;

	i = -1;
	std::cout << "The wizard casts Speak with Animals!\n" << std::endl;
	while (++i < ANIMAL_AMOUNT)
	{
		secondPack[i] = pack[i];
		std::cout << secondPack[i]->getType() << ":\n";
		secondPack[i]->think();
		std::cout << std::endl;
	}
}

/**
 * @brief	Deep copies each Animal in pack into secondPack and proves
 * 			independence by modifying pack[0] and comparing with secondPack[0].
 *
 * @param	pack		Source array — original Animals with ideas.
 * @param	secondPack	Destination array — deep copied Animals.
 *
 * @note	Uses dynamic_cast due to virtual inheritance in Dog and Cat.
 * @note	secondPack elements must be deleted separately from pack elements.
 */
static void	deepCopyTest(Animal *pack[ANIMAL_AMOUNT], Animal *secondPack[ANIMAL_AMOUNT]) {
	int	i;

	i = -1;
	std::cout << "Deep copy test:\n" << std::endl;
	while (++i < ANIMAL_AMOUNT)
	{
		if ((i % 2))
		{
			secondPack[i] = new Dog(*dynamic_cast<Dog *>(pack[i]));
			std::cout << "The wizard reads a Dog's mind!\n";
		}
		else
		{
			secondPack[i] = new Cat(*dynamic_cast<Cat *>(pack[i]));
			std::cout << "The wizard reads a Cat's mind!\n";
		}
		std::cout << std::endl;
	}
	pack[0]->setIdea("I have a new idea!");
	std::cout << "\nAlpha Animal thoughts:\n";
	pack[0]->think();
	std::cout << "\nWizard mindread from the Alpha Animal:\n";
	secondPack[0]->think();
	std::cout << std::endl;
}

/**
 * @brief	Entry point. Tests polymorphism, shallow pointer copy,
 * 			deep copy independence, and abstract class instantiation.
 *
 * @note	Uncomment the AAnimal instantiation lines to test
 * 			that the abstract class cannot be instantiated.
 *
 * @return	0 on successful execution.
 */
int	main(void) {
	Animal		*pack[ANIMAL_AMOUNT];
	Animal		*secondPack[ANIMAL_AMOUNT];
	int			i;

	std::cout << std::endl;
	fillPack(pack);
	speakWithAnimals(pack, secondPack);
	deepCopyTest(pack, secondPack);
	i = -1;
	while (++i < ANIMAL_AMOUNT)
	{
		delete pack[i];
		delete secondPack[i];
	}
	return (0);
}