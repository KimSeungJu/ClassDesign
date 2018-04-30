#include "HomeAppliance.h"

HomeAppliance::HomeAppliance()
{
	price = 0;
	model = "";
	color = "";
}
HomeAppliance::HomeAppliance(int p, string m, string c)
{
	price = p;
	model = m;
	color = c;
}

