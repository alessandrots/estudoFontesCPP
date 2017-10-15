/*
 * Resource.h
 *
 *  Created on: 28/05/2016
 *      Author: alessandrots
 */
#pragma once
#include <string>


#ifndef RESOURCE_H_
#define RESOURCE_H_

class Resource {
private:
	std::string name;
public:
	Resource(std::string n);
	~Resource(void);
	std::string GetName() const {return name;}
};

#endif /* RESOURCE_H_ */
