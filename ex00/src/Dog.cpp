/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:46:39 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 11:53:13 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	//
}

Dog::Dog(Dog &cpy)
{
	this->setType(cpy.getType());
}

Dog	&Dog::operator=(Dog &cpy)
{
	//
	this->setType(cpy.getType());
	return (*this);
}

Dog::~Dog()
{
	return ;
}
