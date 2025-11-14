/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:46:37 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/14 18:46:25 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
}

Cat::Cat(Cat &cpy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->setType(cpy.getType());
}

Cat	&Cat::operator=(Cat &cpy)
{
	std::cout << "Cat assignation constructor called" << std::endl;
	this->setType(cpy.getType());
	delete (this->_brain);
	this->_brain = new Brain (*(cpy.getBrain()));
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete (this->_brain);
	return ;
}

void	Cat::setBrain(Brain *brain)
{
	this->_brain = brain;
}

Brain	*Cat::getBrain(void)
{
	return (this->_brain);
}

void Cat::setIdea(int i, const std::string input)
{
	if (i < 100 && i >= 0)
		this->_brain->setIdea(i, input);
}

std::string Cat::getIdea(int i)
{
	return (this->getBrain()->getIdea(i));
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
	return ;
}