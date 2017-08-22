#ifndef GENOTYPENOMENCLATURE_H
#define GENOTYPENOMENCLATURE_H
#include <string>
#include <sstream>

class GenotypeNomenclature
{
private:
	unsigned long latestName;	
public:
	GenotypeNomenclature(); //ctor
	GenotypeNomenclature(unsigned long nm);	//ctor overloaded
	unsigned long getNextGenotypeName(); //provides the next available name and registers the latest name
	std::string printState();	//prints a string of the state of the genotypeNomenclature
	~GenotypeNomenclature(); //dtor
};

#endif //GENOTYPENOMENCLATURE_H
