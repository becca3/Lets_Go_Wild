//Checks if health of ecosystem is above 0
//If yes, atill alive
//If no, ecosystem not alive - end game

#include "Design.h"

bool Ecosystem::alive()
{
	return health_ > 0;
}