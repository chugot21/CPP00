/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:32:25 by clara             #+#    #+#             */
/*   Updated: 2024/02/01 10:46:47 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

std::string Contact::getfirstname() const
{
    return this->_firstname;
}

std::string Contact::getlastname() const
{
    return this->_lastname;
}

std::string Contact::getnickname() const
{
    return this->_nickname;
}

std::string Contact::getphonenumber() const
{
    return this->_phonenumber;
}

std::string Contact::getdarkestsecret() const
{
    return this->_darkestsecret;
}

void	Contact::setfirstname(std::string firstname)
{
    this->_firstname = firstname;
    return;
}

void	Contact::setlastname(std::string lastname)
{
    this->_lastname = lastname;
    return;
}

void	Contact::setnickname(std::string nickname)
{
    this->_nickname = nickname;
    return;
}

void	Contact::setphonenumber(std::string phonenumber)
{
    this->_phonenumber = phonenumber;
    return;
}

void	Contact::setsecret(std::string secret)
{
    this->_darkestsecret = secret;
    return;
}

