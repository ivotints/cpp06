/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:11:30 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/30 21:00:56 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data *ptr = new Data;
	uintptr_t p;

	std::cout << ptr << "\n";
	p = Serializer::serialize(ptr);
	std::cout << p << "\n";
	ptr = Serializer::deserialize(p);
	std::cout << ptr << "\n";
	delete ptr;
}
