/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:46:37 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 11:49:10 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	//
}
Cat::Cat(Cat &cpy)
{
	this->setType(cpy.getType());
}
Cat	&Cat::operator=(Cat &cpy)
{
	//
	this->setType(cpy.getType());
	return (*this);
}
Cat::~Cat()
{
	return ;
}