#include "HomeAppliance.h"
#include "Refrigerator.h"
#include "Washer.h"
#include "Humidifier.h"

void main()
{
	HomeAppliance * homeApp;
	homeApp = new Refrigerator(70000, "클라쎄", "화이트", 600);
	homeApp->Prn();

	homeApp = new Washer(50000, "클라쎄", "화이트", 8.8f);
	homeApp->Prn();

	homeApp = new Humidifier(80000, "H-60MFP", "핑크", true);
	homeApp->Prn();

}