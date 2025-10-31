/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:57:26 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 14:17:39 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal {

protected:
	std::string	type;
public:
	// default
	WrongAnimal( void );
	//overloaded
	WrongAnimal(std::string type);
	//copy
	WrongAnimal(const WrongAnimal &cpy);
	//assignation
	WrongAnimal	&operator=(WrongAnimal &cpy);
	//destructor
	~WrongAnimal(void);

	void	makeSound() const;
	std::string getType() const ;
	void	setType(std::string input);
} ;
