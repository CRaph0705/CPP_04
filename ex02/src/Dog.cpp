/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:46:39 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/14 18:46:30 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->setType("Dog");
	this->_brain = new Brain();
}

Dog::Dog(Dog &cpy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->setType(cpy.getType());
	this->_brain = new Brain(*(cpy.getBrain()));
}

Dog	&Dog::operator=(Dog &cpy)
{
	std::cout << "Dog assignation constructor called" << std::endl;
	this->setType(cpy.getType());
	delete (this->_brain);
	this->_brain = new Brain(*(cpy.getBrain()));
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete (this->_brain);
	return ;
}

void	Dog::setBrain(Brain *brain)
{
	this->_brain = brain;
}

Brain	*Dog::getBrain(void)
{
	return (this->_brain);
}

void Dog::setIdea(int i, const std::string input)
{
	if (i < 100 && i >= 0)
		this->_brain->setIdea(i, input);
}

std::string Dog::getIdea(int i)
{
	return (this->getBrain()->getIdea(i));
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
	return ;
}
