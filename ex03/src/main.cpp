/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:40:46 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/19 12:38:27 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}

/* int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	// std::cout << ">>>>>>>>>>>>>>>>>>>>> me has its materias." << std::endl;
	ICharacter* bob = new Character("bob");

	
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// // bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// // bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// // bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// // bob->unequip(0);
	// tmp = src->createMateria("ice");
	// bob->equip(tmp);
	// // bob->unequip(0);


	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	return 0;
} */
