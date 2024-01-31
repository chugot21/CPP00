/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:32:25 by clara             #+#    #+#             */
/*   Updated: 2024/01/31 18:54:40 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void){
    Contact::_nbcontact++;
    Contact::nb_on_list = this->_nbcontact;
    return;
}

Contact::~Contact(void){
    return;
}

void    modif_contact(void){
    return;
}

int Contact::get_nbcontact(void) {
    return this->_nbcontact;
}
