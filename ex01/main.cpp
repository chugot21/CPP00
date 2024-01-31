/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:34:55 by clara             #+#    #+#             */
/*   Updated: 2024/01/31 19:00:02 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook   directory;
    std::string str;

    while (42)
    {
        std:: cout << "Entrez une commande (ADD, SEARCH ou EXIT) : ";
        std::cin >> str;
        if (str.compare("ADD") == 0)
            std::cout << "we have to add contact";
        else if (str.compare("SEARCH") == 0)
            std::cout << "we have to search contact";
        else if (str.compare("EXIT") == 0)
        {
            std::cout << "Phonebook is closed forever" << std::endl;
            return(0);
        }
        else if (str)
            std:: cout << "Entrez une commande (ADD, SEARCH ou EXIT) : ";
        std::cout << std::endl;
    }
}