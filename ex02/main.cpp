/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:11:30 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/20 18:36:15 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "realType.hpp"

int	main()
{
	Base *random;

	random = generate();
	identify(random);
	identify(*random);
	delete random;
}
