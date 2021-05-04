/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:29:34 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/28 14:35:54 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void): first_name(""),
						last_name(""),
						nickname(""),
						login(""),
						postal_address(""),
						email_address(""),
						phone_number(""),
						birthday_date(""),
						favorite_meal(""),
						underwear_color(""),
						darkest_secret("")
{}

Contact::~Contact(void)
{}

void	Contact::add(void)
{
	std::cout << "first name*: ";
	std::getline(std::cin,  first_name);
	std::cout << "last name*: ";
	std::getline(std::cin, last_name);
	std::cout << "nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "login: ";
	std::getline(std::cin, login);
	std::cout << "postal address: ";
	std::getline(std::cin, postal_address);
	std::cout << "email address: ";
	std::getline(std::cin, email_address);
	std::cout << "phone number*: ";
	std::getline(std::cin, phone_number);
	std::cout << "birthday date: ";
	std::getline(std::cin, birthday_date); 
	std::cout << "favorite meal: ";
	std::getline(std::cin, favorite_meal);
	std::cout << "underwear color: ";
	std::getline(std::cin, underwear_color);
	std::cout << "darkest secret: ";
	std::getline(std::cin, darkest_secret);
}

std::string	Contact::get(std::string s) const
{
	if (s == "first_name") return first_name;
	if (s == "last_name") return last_name;
	if (s == "nickname") return nickname;
	if (s == "login") return login;
	if (s == "postal_address") return postal_address;
	if (s == "email_address") return email_address;
	if (s == "phone_number") return phone_number;
	if (s == "birthday_date") return birthday_date;
	if (s == "favorite_meal") return favorite_meal;
	if (s == "underwear_color") return underwear_color;
	if (s == "darkest_secret") return darkest_secret;
	return ("");
}

void	Contact::info(void)
{
	std::cout << "     first name: " << first_name << "\n";
	std::cout << "      last name: " << last_name << "\n";;
	std::cout << "       nickname: " << nickname << "\n";
	std::cout << "          login: " << login << "\n";
	std::cout << " postal address: " << postal_address << "\n";
	std::cout << "  email address: " << email_address << "\n";
	std::cout << "   phone number: " << phone_number << "\n";
	std::cout << "  birthday date: " << birthday_date << "\n"; 
	std::cout << "  favorite meal: " << favorite_meal << "\n";
	std::cout << "underwear color: " << underwear_color << "\n";
	std::cout << " darkest secret: " << darkest_secret << "\n";
}
