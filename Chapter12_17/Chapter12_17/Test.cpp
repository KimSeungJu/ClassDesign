#include "HomeAppliance.h"
#include "Refrigerator.h"
#include "Washer.h"
#include "Humidifier.h"

void main()
{
	HomeAppliance * homeApp;
	homeApp = new Refrigerator(70000, "Ŭ���", "ȭ��Ʈ", 600);
	homeApp->Prn();

	homeApp = new Washer(50000, "Ŭ���", "ȭ��Ʈ", 8.8f);
	homeApp->Prn();

	homeApp = new Humidifier(80000, "H-60MFP", "��ũ", true);
	homeApp->Prn();

}