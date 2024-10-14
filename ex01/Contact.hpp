/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:50:46 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/12 13:50:12 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	private:
		int	_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		void	init_info(int index, std::string firstName, std::string lastName, \
		std::string nickName, std::string phoneNumber, std::string darkestSecret);
		void	print_info(void);
		void	print_row(void);
};

#endif