/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:41:03 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 15:10:47 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Brain
{
private:
	std::string	ideas[100];
public:
	Brain(void);
	Brain(const Brain &cpy);
	Brain	&operator=(const Brain &cpy);
	~Brain(void);
} ;