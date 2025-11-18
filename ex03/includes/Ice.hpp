/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:18:42 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/18 19:40:19 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
	Ice(void);
	Ice(Ice &cpy);
	Ice	&operator=(Ice &cpy);
	~Ice(void);

	void use(ICharacter& target);
	Ice* clone() const;
} ;