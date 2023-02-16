
/* Generated from GenMyModel */

#ifndef DEF_RECU
#define DEF_RECU


#include <memory>

class Recu
{
	private :
		int idRecu;
		dateTime date;
		double montantDu;
		double montantPaye;
		TypePaiements TypePaiement;
		
	
};

typedef std::shared_ptr<Recu> RecuPtr;

#endif
