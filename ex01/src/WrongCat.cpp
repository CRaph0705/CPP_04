/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:15:44 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 14:19:15 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(WrongCat &cpy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->setType(cpy.getType());
}

WrongCat	&WrongCat::operator=(WrongCat &cpy)
{
	std::cout << "WrongCat assignation constructor called" << std::endl;
	this->setType(cpy.getType());
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}
