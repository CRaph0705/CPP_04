/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:43:13 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/19 12:44:15 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria( void )
{
	std::cout << "AMateria Default constructor function called." << std::endl;
	this->_owner = NULL;
	return ;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria Overloaded constructor function called." << std::endl;
	this->_type = type;
	return ;
}

AMateria::AMateria(AMateria &cpy)
{
	std::cout << "AMateria Copy constructor function called." << std::endl;
	this->_type = cpy.getType();
	return ;
}

AMateria	&AMateria::operator=(AMateria &cpy)
{
	std::cout << "AMateria Overloaded operator= function called." << std::endl;
	this->setType(cpy.getType());
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor function called." << std::endl;
	return ;
}

std::string const & AMateria::getType() const //Returns the materia type
{
	return (this->_type);
}

void  AMateria::setType(std::string new_type)
{
	this->_type = new_type;
	return ;
}

AMateria* AMateria::clone() const
{
	return (NULL);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
	return ;
}

Character* AMateria::getOwner()
{
	return (this->_owner);
}
void	AMateria::setOwner(Character *new_owner)
{
	this->_owner = new_owner;
}