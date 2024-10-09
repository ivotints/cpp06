/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realType.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:57:34 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/20 18:22:07 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

class A;
class B;
class C;

Base	*generate();
void	identify(Base *p);
void	identify(Base &p);



