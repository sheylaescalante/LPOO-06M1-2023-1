/*
	La clase Company modela a un cliente del tipo persona jur�dica.
	Company hereda de Customer, eso significa que un cliente persona jur�dica (empresa) es un tipo de cliente del sistema.
*/
#include "Customer.h"

#pragma once

using  namespace System;
namespace SalesModel {
	[Serializable]
    public ref class Company : public Customer {
	public:
		property String^ WebPage;

		property String^ Agent;
    };
}