/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:41:36 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/29 15:05:18 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	**_knownMaterias;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &);
		virtual ~MateriaSource();

		MateriaSource	&operator =(MateriaSource const &);
		
		AMateria const		*getKnownMateria(int) const;	

		void		learnMateria(AMateria*);
		AMateria	*createMateria(std::string const & type);
};

#endif
