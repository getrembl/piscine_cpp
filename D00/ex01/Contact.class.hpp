// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 14:41:35 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 18:27:18 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class	Contact {

public:

	Contact ( void );
	~Contact ( void );

	void			set( void );
	void			search( void ) const;
	void			aff( void ) const;
	std::string		getFirstName( void ) const;
	void			setFirstName( std::string x );
	std::string		getLastName( void ) const;
	void			setLastName( std::string x );
	std::string		getNickName( void ) const;
	void			setNickName( std::string x );
	std::string		getLogin( void ) const;
	void			setLogin( std::string x );
	std::string		getPostal( void ) const;
	void			setPostal( std::string x );
	std::string		getEmail( void ) const;
	void			setEmail( std::string x );
	std::string		getPhone( void ) const;
	void			setPhone( std::string x );
	std::string		getBirthday( void ) const;
	void			setBirthday( std::string x );
	std::string		getFavoriteMeal( void ) const;
	void			setFavoriteMeal( std::string x );
	std::string		getColor( void ) const;
	void			setColor( std::string x );
	std::string		getSecret( void ) const;
	void			setSecret( std::string x );

private:

	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickName;
	std::string		_login;
	std::string		_postal;
	std::string		_email;
	std::string		_phone;
	std::string		_birthday;
	std::string		_favoriteMeal;
	std::string		_color;
	std::string		_secret;

};

#endif
