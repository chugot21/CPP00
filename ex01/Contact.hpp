/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clara <clara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:52:46 by clara             #+#    #+#             */
/*   Updated: 2024/01/31 18:54:53 by clara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

class Contact{

public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	int	nb_on_list;

	Contact(void);
	~Contact(void);

	void	modif_contact(void);
	int		get_nbcontact(void);

private:

	int	_nbcontact;

};

#endif