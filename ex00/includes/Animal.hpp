/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:21:23 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 14:55:39 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal {

protected:
	std::string	type;
public:
	// default
	Animal( void );
	//overloaded
	Animal(std::string type);
	//copy
	Animal(const Animal &cpy);
	//assignation
	Animal	&operator=(Animal &cpy);
	//destructor
	virtual ~Animal(void);

	virtual	void	makeSound() const;
	std::string getType() const ;
	void	setType(std::string input);
} ;