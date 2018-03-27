/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleclair <mleclair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 11:42:44 by mleclair          #+#    #+#             */
/*   Updated: 2018/03/26 12:06:31 by mleclair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_CLASS_HPP
# define BOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class book {

public:
	int set;

	book(void);
	~book(void);
	void add(void);
	void display(void)const;
	void sdisplay(int i)const;


private:
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string login;
	std::string adress;
	std::string email;
	std::string phone;
	std::string bday;
	std::string meal;
	std::string undiz;
	std::string secret;

};

#endif
