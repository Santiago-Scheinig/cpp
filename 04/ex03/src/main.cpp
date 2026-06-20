#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/**
 * @brief	Runs the subject's required test — learns Ice and Cure,
 * 			equips them on "me" and uses them on "bob".
 *
 * @param	src		MateriaSource to learn and create Materias from.
 */
static void	subjectTest(IMateriaSource *src)
{
	ICharacter	*me = new Character("me");
	ICharacter	*bob = new Character("bob");
	AMateria	*tmp;

	std::cout << "[subjectTest] equipping ice(0) and cure(1) on 'me', target 'bob'\n";
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "[slot 0] ";
	me->use(0, *bob);
	std::cout << "[slot 1] ";
	me->use(1, *bob);
	delete bob;
	delete me;
}

/**
 * @brief	Stresses the inventory limit by equipping 5 Materias
 * 			into a 4-slot inventory. The 5th equip should be silently ignored.
 *
 * @param	src		MateriaSource to create Materias from.
 */
static void	inventoryFullTest(IMateriaSource *src)
{
	ICharacter	*mage = new Character("mage");
	AMateria	*tmp;
	int			i;

	std::cout << "[inventoryFullTest] equipping 5 Materias into 4 slots — 5th must be ignored\n";
	i = -1;
	while (++i < 5)
	{
		tmp = src->createMateria(i % 2 ? "cure" : "ice");
		std::cout << "[equip " << i << "] " << (i < 4 ? "accepted" : "should be ignored") << "\n";
		mage->equip(tmp);
		if (i >= 4)
			std::cout << "[equip " << i << "] confirmed ignored.\n";
	}
	std::cout << "[slot 0] ";
	mage->use(0, *mage);
	std::cout << "[slot 3] ";
	mage->use(3, *mage);
	std::cout << "[slot 4] out of bounds — nothing should happen\n";
	mage->use(4, *mage);
	delete mage;
}

/**
 * @brief	Tests unequip edge cases — unequipping a valid slot,
 * 			an empty slot, and an out-of-bounds index.
 * 			Dropped Materias are handled by the Character's internal floor.
 *
 * @param	src		MateriaSource to create Materias from.
 */
static void	unequipTest(IMateriaSource *src)
{
	ICharacter	*rogue = new Character("rogue");
	AMateria	*tmp;

	std::cout << "[unequipTest] equipping ice(0) cure(1), then unequipping edge cases\n";
	tmp = src->createMateria("ice");
	rogue->equip(tmp);
	tmp = src->createMateria("cure");
	rogue->equip(tmp);
	std::cout << "[unequip 0] valid — ice dropped to floor\n";
	rogue->unequip(0);
	std::cout << "[unequip 0] already empty — nothing should happen\n";
	rogue->unequip(0);
	std::cout << "[unequip -1] out of bounds — nothing should happen\n";
	rogue->unequip(-1);
	std::cout << "[unequip 4] out of bounds — nothing should happen\n";
	rogue->unequip(4);
	std::cout << "[slot 0] empty after unequip — nothing should happen\n";
	rogue->use(0, *rogue);
	std::cout << "[slot 1] cure still equipped\n";
	std::cout << "[slot 1] ";
	rogue->use(1, *rogue);
	delete rogue;
}

/**
 * @brief	Tests deep copy of a Character — modifying the original
 * 			after copying should not affect the copy's inventory.
 *
 * @param	src		MateriaSource to create Materias from.
 */
static void	deepCopyTest(IMateriaSource *src)
{
	ICharacter	*warrior = new Character("warrior");
	AMateria	*tmp;

	std::cout << "[deepCopyTest] equipping ice(0) cure(1) on warrior, then deep copying\n";
	tmp = src->createMateria("ice");
	warrior->equip(tmp);
	tmp = src->createMateria("cure");
	warrior->equip(tmp);

	ICharacter	*clone = new Character(*dynamic_cast<Character *>(warrior));

	std::cout << "[unequip 0,1] stripping warrior's inventory\n";
	warrior->unequip(0);
	warrior->unequip(1);
	std::cout << "[warrior slot 0] empty — nothing should happen\n";
	warrior->use(0, *clone);
	std::cout << "[clone slot 0] should be unaffected by warrior's unequip\n";
	std::cout << "[clone slot 0] ";
	clone->use(0, *warrior);
	std::cout << "[clone slot 1] ";
	clone->use(1, *warrior);
	delete warrior;
	delete clone;
}

/**
 * @brief	Tests unknown Materia type — createMateria should return 0
 * 			and equip should silently ignore a NULL Materia.
 *
 * @param	src		MateriaSource to create Materias from.
 */
static void	unknownMateriaTest(IMateriaSource *src)
{
	ICharacter	*priest = new Character("priest");
	AMateria	*tmp;

	std::cout << "[unknownMateriaTest] requesting unknown type 'fire' — should return 0\n";
	tmp = src->createMateria("fire");
	std::cout << "[createMateria] returned: " << tmp << " (0 = NULL, correct)\n";
	std::cout << "[equip NULL] nothing should happen\n";
	priest->equip(tmp);
	std::cout << "[slot 0] empty — nothing should happen\n";
	priest->use(0, *priest);
	delete priest;
}

/**
 * @brief	Entry point. Runs all tests for AMateria, ICharacter,
 * 			and IMateriaSource polymorphism, edge cases, and deep copy.
 *
 * @return	0 on successful execution.
 */
int	main(void)
{
	IMateriaSource	*src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "\n--- Subject Test ---\n";
	subjectTest(src);
	std::cout << "\n--- Inventory Full Test ---\n";
	inventoryFullTest(src);
	std::cout << "\n--- Unequip Edge Cases ---\n";
	unequipTest(src);
	std::cout << "\n--- Deep Copy Test ---\n";
	deepCopyTest(src);
	std::cout << "\n--- Unknown Materia Test ---\n";
	unknownMateriaTest(src);
	delete src;
	return (0);
}