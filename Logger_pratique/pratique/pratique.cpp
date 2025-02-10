

#include <iostream>
#include "Logger.h"

using namespace Patate; 

int main(int argc, char** argv)
{
#ifdef _DEBUG
	Logger log(LogType::Console); 
#else
	Logger log (LogType::Fichier);
#endif
	int i = 0;
	while (i < 1000) {
		if (i == 500) {
			log.error("Je n<aime pas cette valeur");
		}
		if (i == 42) {
			log.print("J'aime cette valeur");  
	
		}
		if (i > 900) {
			log.warn("The end is nigh"); 
	
		}
		i++;

	}

}

