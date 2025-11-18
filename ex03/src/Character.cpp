/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:40:36 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/18 17:20:42 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	std::cout << "Character default constructor function called." << std::endl;
	this->_name = "DEFAULT";
	return ;
}

Character::Character(std::string name) :_name(name)
{
	std::cout << "Character overloaded constructor function called." << std::endl;
	return ;
}

Character::Character(Character &cpy)
{
	std::cout << "Character copy constructor function called." << std::endl;
	this->_name = cpy.getName();
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
	return ;
}
void Character::equip(AMateria* m)
{
	int idx;
	
	idx = 0;
	while(this->inventory[idx] != NULL)
		idx++;
	if (idx > 3 || idx < 0)
		return ;
	this->inventory[idx] = m;
	return ;
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	this->inventory[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		return ;
	this->inventory[idx]->use(target);
	return ;
}