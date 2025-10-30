/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:41:59 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/30 13:53:16 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	// for (int i = 0; i != 100; i++)
	// {
	// 	cpy.ideas[i].copy(this->ideas[i], cpy.ideas[i].length(), 0);
	// }
	*this = cpy;
	return ;
}

Brain	&Brain::operator=(const Brain &cpy)
{
	std::cout << "Brain assignation constructor called" << std::endl;
	for (int i = 0; i != 100; i++)
	{
		this->ideas[i] = cpy.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor function called" << std::endl;
	return ;
}

void Brain::setIdea(int i, const std::string input)
{
	this->ideas[i] = input;
}

std::string	Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}
