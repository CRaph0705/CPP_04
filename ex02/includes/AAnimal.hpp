/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:21:23 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/18 10:58:22 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal {

protected:
	std::string	type;
public:
	// default
	AAnimal( void );
	//overloaded
	AAnimal(std::string type);
	//copy
	AAnimal(const AAnimal &cpy);
	//assignation
	AAnimal	&operator=(AAnimal &cpy);
	//destructor
	virtual ~AAnimal(void);

	virtual void	makeSound() const = 0;
	std::string getType() const;
	void	setType(std::string input);

	virtual void setIdea(int i, const std::string input);
	virtual std::string getIdea(int i);
} ;	
