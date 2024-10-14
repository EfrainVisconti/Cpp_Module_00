/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:50:07 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/12 17:21:52 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_num;

	public:
		PhoneBook();
		void	add_contact(std::string firstName, std::string lastName, \
		std::string nickName, std::string phoneNumber, std::string darkestSecret);
		void	print_list();
		void	print_contact(std::string input);
};

#endif