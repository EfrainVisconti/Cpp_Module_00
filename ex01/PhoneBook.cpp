/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:51:06 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/14 13:31:41 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_num = 0;
}

static bool	is_valid_number(const std::string number)
{
	for (std::size_t i = 0; i < number.size(); ++i)
	{
		if (!isdigit(number[i]))
			return false;
	}
	return true;
}

void	PhoneBook::add_contact(std::string firstName, std::string lastName,
							std::string nickName, std::string phoneNumber,
							std::string darkestSecret)
{
	if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() \
		|| darkestSecret.empty())
	{
		std::cout << "Contact can't have empty fields." << std::endl;
		std::cout << "The contact was not saved." << std::endl;
		return ;
	}
	if (!is_valid_number(phoneNumber))
	{
		std::cout << "Contact phone number is invalid." << std::endl;
		std::cout << "The contact was not saved." << std::endl;
		return ;
	}
	this->_contacts[this->_num % 8].init_info(this->_num % 8, firstName, lastName,
					nickName, phoneNumber, darkestSecret);
	this->_num += 1;
}

void	PhoneBook::print_list()
{
	int	number;

	if (this->_num < 8)
		number = this->_num;
	else
		number = 8;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < number; ++i)
		this->_contacts[i].print_row();
}

void	PhoneBook::print_contact(std::string input)
{
	int	index;

	index = std::atoi(input.c_str());
	if (!is_valid_number(input) || index < 0 || index >= 8 || index > this->_num - 1)
	{
		std::cout << "Not valid index" << std::endl;
	}
	else
		this->_contacts[index].print_info();
}
