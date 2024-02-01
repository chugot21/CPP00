/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:39:00 by clara             #+#    #+#             */
/*   Updated: 2024/02/01 11:27:10 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOPOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

class PhoneBook
{

public:

    PhoneBook(int a1, int a2);
    ~PhoneBook(void);

    Contact getContact(int index) const;
    int get_nbcontact() const;

    void    setcontact(Contact contact);

private:

    static int	_nbcontact;
    Contact _tabcontacts[8];
    int _index;
    int _oldercontact;

};

#endif