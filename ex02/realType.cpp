/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:54:42 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/20 18:34:35 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "realType.hpp"

Base *generate()
{
	srand(time(0));
	switch (rand() % 3)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
	else
		std::cout << "?\n";
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A\n";
	}
	catch(const std::exception&) {}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B\n";
	}
	catch(const std::exception&) {}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C\n";
	}
	catch(const std::exception&) {}
}
