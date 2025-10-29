/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:47:11 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 13:56:14 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->setType("");
	return ;
}

Animal::Animal(std::string input) : type(input)
{
	std::cout << "Animal overloaded constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = cpy.type;
	return ;
}

Animal	&Animal::operator=(Animal &cpy)
{
	std::cout << "Animal assignation constructor called" << std::endl;
	this->type = cpy.type;	
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

void	Animal::makeSound() const
{
	std::string opt = this->getType();
	
	if (this->getType() == "Dog")
		std::cout << "Woof" << std::endl;
	else if (this->getType() == "Cat")
		std::cout << "Meow" << std::endl;
	else
		std::cout << "..." << std::endl;
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
