#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcSCRX.hpp"

#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

ExcSCRX::ExcSCRX() {};

ExcSCRX::~ExcSCRX() {};











bool assign_ExcSCRX_tatb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1)) {
                buffer >> element->tatb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSCRX_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSCRX_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSCRX_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSCRX_emin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1)) {
                buffer >> element->emin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSCRX_emax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1)) {
                buffer >> element->emax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSCRX_cswitch(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1)) {
                buffer >> element->cswitch;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcSCRX_rcrfd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1)) {
                buffer >> element->rcrfd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExcSCRX_factory() {
		return new ExcSCRX;
	}
}

void ExcSCRX::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcSCRX"), &ExcSCRX_factory));
}

void ExcSCRX::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.tatb"), &assign_ExcSCRX_tatb));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.tb"), &assign_ExcSCRX_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.k"), &assign_ExcSCRX_k));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.te"), &assign_ExcSCRX_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.emin"), &assign_ExcSCRX_emin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.emax"), &assign_ExcSCRX_emax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.cswitch"), &assign_ExcSCRX_cswitch));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.rcrfd"), &assign_ExcSCRX_rcrfd));
}

void ExcSCRX::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
								}

const char ExcSCRX::debugName[] = "ExcSCRX";
const char* ExcSCRX::debugString()
{
	return ExcSCRX::debugName;
}

const BaseClassDefiner ExcSCRX::declare()
{
	return BaseClassDefiner(ExcSCRX::addConstructToMap, ExcSCRX::addPrimitiveAssignFnsToMap, ExcSCRX::addClassAssignFnsToMap, ExcSCRX::debugName);
}


