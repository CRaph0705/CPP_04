/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:40:36 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/19 12:43:46 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria	*Character::floor[20] = {NULL};

Character::Character( void )
{
	std::cout << "Character default constructor function called." << std::endl;
	this->_name = "DEFAULT";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	return ;
}

Character::Character(std::string name) :_name(name)
{
	std::cout << "Character overloaded constructor function called." << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	return ;
}

Character::Character(Character &cpy)
{
	std::cout << "Character copy constructor function called." << std::endl;
	this->_name = cpy.getName();
	for (int i = 0; i < 4; i++)
	{
		if (cpy._inventory[i] != NULL)
		{
			
			this->_inventory[i] = cpy._inventory[i]->clone();
			this->_inventory[i]->setOwner(this);
		}
		else
		{
			this->_inventory[i] = NULL;
		}
	}
	return ;
}

Character	&Character::operator=(Character &cpy)
{
	std::cout << "Character overloaded operator= function called." << std::endl;
	this->_name = cpy.getName();
	return (*this);
}

Character::~Character( void )
{
	std::cout << "Character destructor function called." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			delete (this->_inventory[i]);
			this->_inventory[i] = NULL;
		}
		else
			this->_inventory[i] = NULL;
	}
	for (int i = 0; i < 20; i++)
	{
		if (Character::floor[i] != NULL)
		{
			delete (Character::floor[i]);
			floor[i] = NULL;
		}
	}
	return ;
}
void Character::equip(AMateria* m)
{
	std::cout << "Character equip function called." << std::endl;
	if (!m)
	{
		std::cout << "This materia doesn't match any known types." << std::endl;
		return ;
	}
	if (m->getOwner() != NULL)
	{
		std::cout << "This materia is already equiped." << std::endl;
		return ;
	}
	int i;
	for (i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			m->setOwner(this);
			this->_inventory[i] = m;
			break ;
		}
	}
	if (i == 4)
	{
		std::cout << "Full inventory, this materia cannot be equipped." << std::endl;
		std::cout << "The materia fades away ..." << std::endl;
		delete (m);
		return ;
	}
	std::cout << "Materia equiped correctly." << std::endl;
	return ;
}

void Character::unequip(int idx)
{

	std::cout << "Character unequip function called." << std::endl;
	int	i;
	if (idx > 3 || idx < 0)
		return ;
	if (this->_inventory[idx] == NULL)
	{
		std::cout << "I'm confused... What do you want to unequip ?" << std::endl;
		return ;
	}
	for (i = 0; i < 20; i++)
	{
		if (Character::floor[i] == NULL)
		{
			floor[i] = this->_inventory[idx];
			this->_inventory[idx]->setOwner(NULL);
			this->_inventory[idx] = NULL;
			break ;
		}
	}
	if (i == 20)
	{
		std::cout << "The materia cannot be droped, there are already too many items on the floor." << std::endl;
		return ;
	}
	std::cout << "Materia unequiped correctly." << std::endl;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "Nothing to use here." << std::endl;
	return ;
}