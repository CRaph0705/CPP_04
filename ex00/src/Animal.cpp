/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:47:11 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 11:52:34 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	
}

Animal::Animal(std::string input) : type(input)
{
	
}

Animal::Animal(const Animal &cpy)
{
	this->type = cpy.type;
}

Animal	&Animal::operator=(Animal &cpy)
{
	this->type = cpy.type;	
	return (*this);
}

Animal::~Animal()
{
	return ;
}

void	Animal::makeSound() const
{
	return ;
}

std::string Animal::getType() const
{
	return (this->type);
}

void	Animal::setType(std::string input)
{
	this->type = input;
	return ;	
}
