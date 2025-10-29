/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:46:37 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 13:40:52 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->setType("Cat");
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
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}
