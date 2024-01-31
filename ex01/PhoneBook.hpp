/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:39:00 by clara             #+#    #+#             */
/*   Updated: 2024/01/31 18:45:41 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOPOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

class PhoneBook{

public:

    Contact *tab_contact;
    int older_contact;

    PhoneBook(void);
    ~PhoneBook(void);

};

#endif