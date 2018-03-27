/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleclair <mleclair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 11:42:44 by mleclair          #+#    #+#             */
/*   Updated: 2018/03/26 12:06:31 by mleclair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.class.hpp"

book::book(void) {
    this->set = 0;
}

book::~book(void) {
}

void book::add(void) {
    std::cout << "First Name: ";
    std::getline(std::cin, this->fname);
    std::cout << "Last Name: ";
    std::getline(std::cin, this->lname);
    std::cout << "Nickname: ";
    std::getline(std::cin, this->nickname);
    std::cout << "login: ";
    std::getline(std::cin, this->login);
    std::cout << "Postal address: ";
    std::getline(std::cin, this->adress);
    std::cout << "email: ";
    std::getline(std::cin, this->email);
    std::cout << "Phone number: ";
    std::getline(std::cin, this->phone);
    std::cout << "Birthday date: ";
    std::getline(std::cin, this->bday);
    std::cout << "Favorite meal: ";
    std::getline(std::cin, this->meal);
    std::cout << "Underwear Color: ";
    std::getline(std::cin, this->undiz);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, this->secret);
    display();
}

void book::display(void) const{
    std::cout << std::endl << "First Name: " << this->fname << std::endl;
    std::cout << "Last Name: " << this->lname << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "login: " << this->login << std::endl;
    std::cout << "Postal address: " << this->adress << std::endl;
    std::cout << "email: " << this->email << std::endl;
    std::cout << "Phone number: " << this->phone << std::endl;
    std::cout << "Birthday date: " << this->bday << std::endl;
    std::cout << "Favorite meal: " << this->meal << std::endl;
    std::cout << "Underwear Color: " << this->undiz << std::endl;
    std::cout << "Darkest secret: " << this->secret << std::endl << std::endl;
}

void book::sdisplay(int i) const {
    std::string buff;

    std::cout << std::setw(10) << i << '|';
    std::cout << std::setw(10);
    if (this->lname.length() > 10){buff = this->lname; buff.resize(9); buff.append("."); std::cout << buff << "|";}
    else
      std::cout << this->lname << '|';

    std::cout << std::setw(10);
    if (this->fname.length() > 10){ buff = this->fname; buff.resize(9); buff.append("."); std::cout << buff << "|"; }
    else
      std::cout << this->fname << '|';

    std::cout << std::setw(10);
    if (this->nickname.length() > 10){buff = this->nickname; buff.resize(9); buff.append("."); std::cout << buff << std::endl;}
    else
      std::cout << this->nickname << std::endl;
}
