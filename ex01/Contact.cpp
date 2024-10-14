/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:52:45 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/12 17:13:25 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::init_info(int index, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->_index = index;
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

void	Contact::print_info(void)
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickName << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}

static void	row_format(std::string info)
{
	if (info.length() > 10)
		std::cout << info.substr(0, 9) << ".";
	else
		std::cout << std::right << std::setw(10) << info;
}

void	Contact::print_row(void)
{
	std::cout << "|" << std::right << std::setw(10) << this->_index;
	std::cout <<  "|";
	row_format(this->_firstName);
	std::cout <<  "|";
	row_format(this->_lastName);
	std::cout <<  "|";
	row_format(this->_nickName);
	std::cout <<  "|";
	std::cout << std::endl;
}
