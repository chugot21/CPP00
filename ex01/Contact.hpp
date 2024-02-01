/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:52:46 by clara             #+#    #+#             */
/*   Updated: 2024/02/01 12:38:04 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <limits>

class Contact{

public:

	Contact(void);
	~Contact(void);

	std::string getfirstname() const;
	std::string getlastname() const;
	std::string getnickname() const;
	std::string getphonenumber() const;
	std::string getdarkestsecret() const;

	void	setfirstname(std::string firstname);
	void	setlastname(std::string lastname);
	void	setnickname(std::string nickname);
	void	setphonenumber(std::string phonenumber);
	void	setsecret(std::string secret);

private:

	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phonenumber;
	std::string	_darkestsecret;

};

#endif