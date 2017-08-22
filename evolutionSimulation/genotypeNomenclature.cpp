/**
	* CS-11 Asn 6
	* genotypeNomenclature.cpp
	* Purpose: provides unique names for genotype objects
	*
	* @author Mats Wallden
	* @version 1.0 AUG/22/2017
*/

#include "GenotypeNomenclature.h"

// default constructor, sets the latest name to 0
GenotypeNomenclature::GenotypeNomenclature() : latestName{ 0 }
{
}

//overloaded constructor, sets the lates name to the parameter
GenotypeNomenclature::GenotypeNomenclature(unsigned long nm) : latestName{ nm }
{  
}

GenotypeNomenclature::~GenotypeNomenclature()
{//destructor
}

/**
	* Returns the next unique ID for a Genotype object
	*
	* @return the next unique ID for a Genotype object
*/
unsigned long GenotypeNomenclature::getNextGenotypeName()
{
	latestName++; 
	return latestName;
}

/**
	* Returns a summary of the state of a GenotypeNomenclature object
	*
	* @return a summary of the state of a GenotypeNomenclature object
*/
std::string GenotypeNomenclature::printState() {
	std::ostringstream convert; //used for converting int to string
		convert << "{" 
		<< "\"class\": GenotypeNomenclature"
		<< ",\"state\": "
		<< latestName 
		<< "}";
	return convert.str();
}
