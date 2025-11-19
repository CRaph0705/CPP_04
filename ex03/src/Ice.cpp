/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:18:38 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/19 10:26:33 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice Default constructor function called." << std::endl;
	this->_type = "ice";
	return ;
}

/* Ice::Ice(void)
{
	std::cout << "Ice Overloaded constructor function called." << std::endl;
	return ;
} */

Ice::Ice(const Ice &cpy)
{
	std::cout << "Ice Copy constructor function called." << std::endl;
	this->_type = cpy.getType();
	return ;
}

Ice	&Ice::operator=(Ice &cpy)
{
	std::cout << "Ice Overloaded operator= function called." << std::endl;
	(void)cpy;
	// this->_type = cpy.getType();
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor function called." << std::endl;
	return ;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
AMateria* Ice::clone()const
{
	AMateria	*tmp;

	tmp = new Ice(*this);
	return (tmp);
}
