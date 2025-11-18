/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:19:18 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/18 17:40:53 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure(void)
{
	std::cout << "Cure Default constructor function called." << std::endl;
	return ;
}

	// std::cout << "Cure Overloaded constructor function called." << std::endl;

Cure::Cure(Cure &cpy)
{
	std::cout << "Cure Copy constructor function called." << std::endl;
	this->_type = cpy.getType();
	return ;
}

Cure	&Cure::operator=(Cure &cpy)
{
	std::cout << "Cure Overloaded operator= function called." << std::endl;
	this->_type = cpy.getType();
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor function called." << std::endl;

	return ;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}