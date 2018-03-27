/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleclair <mleclair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 11:42:44 by mleclair          #+#    #+#             */
/*   Updated: 2018/03/26 13:03:58 by mleclair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.class.hpp"

void search(book *phonebook){
	std::string index;
	int i = -1;
	while (++i < 9) {
		if (phonebook[i].set == 1){
			phonebook[i].sdisplay(i);
		}
	}
	std::cout << "Index: " << std::endl;
	std::getline(std::cin, index);
	if (phonebook[atoi(index.c_str())].set){
		phonebook[atoi(index.c_str())].display();
	}
}

void add(book *phonebook){
	int i = -1;
	while (++i < 9 && phonebook[i].set == 1){
	}
	if (i < 9 && phonebook[i].set == 0){
		phonebook[i].set = 1;
		phonebook[i].add();
	}
	else
		std::cout << "Too many contact, add one more for only 99.99. Made by EA" << std::endl;
}

int main(void){
	std::string buff;
	book phonebook[8];

	while (1){
		std::cout << std::endl << "Hello, thanks for utilizing this piece of crap" << std::endl;
		std::cout << "You can use the following command:" << std::endl;
		std::cout << "ADD  /  SEARCH  /  EXIT  " << std::endl << "INPUT: ";
		std::getline (std::cin, buff);
		if(!buff.compare("ADD")){
			add(phonebook);
		}
		else if(!buff.compare("SEARCH")){
			search(phonebook);
		}
		else if(!buff.compare("EXIT")){
			break ;
		}
	}
}
