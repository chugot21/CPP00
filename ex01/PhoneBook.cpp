/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:24:26 by clara             #+#    #+#             */
/*   Updated: 2024/02/01 11:28:15 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int a1, int a2):_index(a1), _oldercontact(a2)
{
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

Contact PhoneBook::getContact(int index) const
{
	return this->_tabcontacts[index];
}

int PhoneBook::get_nbcontact() const
{
	return this->_nbcontact;
}

void    PhoneBook::setcontact(Contact contact)
{
	if (this->_nbcontact < 8)
	{
		this->_nbcontact++;
		this->_tabcontacts[this->_nbcontact - 1] = contact;
	}
	else
	{
		this->_tabcontacts[this->_oldercontact] = contact;
		if(this->_oldercontact == 7)
			this->_oldercontact = 0;
		else
			this->_oldercontact++;
	}
}

int PhoneBook::_nbcontact = 0;

