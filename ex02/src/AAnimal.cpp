/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:47:11 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/14 18:40:43 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->setType("");
	return ;
}

AAnimal::AAnimal(std::string input) : type(input)
{
	std::cout << "Animal overloaded constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &cpy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = cpy.type;
	return ;
}

AAnimal	&AAnimal::operator=(AAnimal &cpy)
{
	std::cout << "Animal assignation constructor called" << std::endl;
	this->type = cpy.type;	
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

void	AAnimal::makeSound() const
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

std::string AAnimal::getType() const
{
	return (this->type);
}

void	AAnimal::setType(std::string input)
{
	this->type = input;
	return ;	
}
void AAnimal::setIdea(int i, const std::string input)
{
	(void)i;
	(void)input;
	return ;
}

std::string	AAnimal::getIdea(int i)
{
	(void)i;
	return ("");
}