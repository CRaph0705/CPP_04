/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:18:42 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/19 10:31:05 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
	Ice(void);
	Ice(const Ice &cpy);
	Ice	&operator=(Ice &cpy);
	~Ice(void);

	void use(ICharacter& target);
	virtual AMateria* clone() const;
} ;