#include "GenotypeNomenclature.h"
#include <iostream>

int main()
{
	unsigned long nm = 0;
	GenotypeNomenclature gn = GenotypeNomenclature(nm);
	gn.~GenotypeNomenclature();
    return 0;
}

