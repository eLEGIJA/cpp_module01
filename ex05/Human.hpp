/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 21:02:32 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 21:56:15 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

using   std::string;

class Human {
    private:
        Brain const brain;

    public:
        Human(void);
        string identify(void) const;
        const Brain& getBrain(void);
        ~Human(void);
};

#endif