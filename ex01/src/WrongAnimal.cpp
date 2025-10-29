/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:16:28 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 14:19:17 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->setType("");
	return ;
}

WrongAnimal::WrongAnimal(std::string input) : type(input)
{
	std::cout << "WrongAnimal overloaded constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = cpy.type;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal &cpy)
{
	std::cout << "WrongAnimal assignation constructor called" << std::endl;
	this->type = cpy.type;	
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

void	WrongAnimal::makeSound() const
{
	std::string opt = this->getType();
	
	if (this->getType() == "WrongCat")
		std::cout << "MIIIIAAAAAAOUUUUU" << std::endl;
	else
		std::cout << "..." << std::endl;
	return ;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string input)
{
	this->type = input;
	return ;	
}
