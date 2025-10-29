/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:46:39 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 14:53:39 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(Dog &cpy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->setType(cpy.getType());
}

Dog	&Dog::operator=(Dog &cpy)
{
	std::cout << "Dog assignation constructor called" << std::endl;
	this->setType(cpy.getType());
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
