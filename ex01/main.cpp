/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:34:55 by clara             #+#    #+#             */
/*   Updated: 2024/02/01 13:04:05 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void    add(PhoneBook *directory)
{
	Contact contact;
	std::string input;

	std::cin.clear();
	std::cout << "First Name : ";
	std::getline(std::cin, input);
	while (input == "")
	{
		std::cout << "First Name : ";
		std::getline(std::cin, input);
	}
	contact.setfirstname(input);
	std::cout << "Last Name : ";
	std::getline(std::cin, input);
	while (input == "")
	{
		std::cout << "Last Name : ";
		std::getline(std::cin, input);
	}
	contact.setlastname(input);
	std::cout << "Nickname : ";
	std::getline(std::cin, input);
	while (input == "")
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, input);
	}
	contact.setnickname(input);
	std::cout << "Phone Number : ";
	std::getline(std::cin, input);
	while (input == "")
	{
		std::cout << "Phone Number : ";
		std::getline(std::cin, input);
	}
	contact.setphonenumber(input);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, input);
	while (input == "")
	{
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, input);
	}
	contact.setsecret(input);
	directory->setcontact(contact);
}

std::string	checksize(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void    display_contactlist(PhoneBook *directory, int i)
{
	std::cout << "|" << std::setw(10) << std::right << i;
	std::cout << "|" << std::setw(10) << std::right << checksize(directory->getContact(i).getfirstname());
	std::cout << "|" << std::setw(10) << std::right << checksize(directory->getContact(i).getlastname());
	std::cout << "|" << std::setw(10) << std::right << checksize(directory->getContact(i).getnickname()) << "|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

void    display_contact(PhoneBook *directory, int index)
{
	std::cout << "First Name : " << directory->getContact(index).getfirstname() << std::endl;
	std::cout << "Last Name : " << directory->getContact(index).getlastname() << std::endl;
	std::cout << "Nickname : " << directory->getContact(index).getnickname() << std::endl;
	std::cout << "Phone Number : " << directory->getContact(index).getphonenumber() << std::endl;
	std::cout << "Darkest Secret: " << directory->getContact(index).getdarkestsecret() << std::endl;
}

void    search(PhoneBook *directory)
{
	int i;
	std::string input;

	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (i = 0; i < directory->get_nbcontact(); i++)
		display_contactlist(directory, i);
	std::cout << "Enter index of contact : ";
	while (!(std::getline(std::cin, input)) || input < "0" || input >= std::to_string(directory->get_nbcontact()))
	{
		std::cin.clear();
		std::cout << "Wrong index, please retry : ";
	}
	display_contact(directory, std::stoi(input));
}

int main()
{
	PhoneBook   directory(0, 0);
	std::string str;

	while (42)
	{
		std::cout << "Entrez une commande (ADD, SEARCH ou EXIT) : ";
		std::getline(std::cin, str);
		if (str == "ADD")
			add(&directory);
		else if (str == "SEARCH")
			search(&directory);
		else if (str == "EXIT")
		{
			std::cout << "Phonebook is closed forever." << std::endl;
			return(0);
		}
	}
}