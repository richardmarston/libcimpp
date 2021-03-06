#include <sstream>
#include "PowerSystemStabilizerDynamics.hpp"
#include "PowerSystemStabilizerUserDefined.hpp"

#include "Boolean.hpp"
#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

PowerSystemStabilizerUserDefined::PowerSystemStabilizerUserDefined() {};

PowerSystemStabilizerUserDefined::~PowerSystemStabilizerUserDefined() {};



bool assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PowerSystemStabilizerUserDefined* element = dynamic_cast<PowerSystemStabilizerUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_PowerSystemStabilizerUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerSystemStabilizerUserDefined* element = dynamic_cast<PowerSystemStabilizerUserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* PowerSystemStabilizerUserDefined_factory() {
		return new PowerSystemStabilizerUserDefined;
	}
}

void PowerSystemStabilizerUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerUserDefined"), &PowerSystemStabilizerUserDefined_factory));
}

void PowerSystemStabilizerUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerUserDefined.proprietary"), &assign_PowerSystemStabilizerUserDefined_proprietary));
	}

void PowerSystemStabilizerUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerUserDefined.ProprietaryParameterDynamics"), &assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics));
}

const char PowerSystemStabilizerUserDefined::debugName[] = "PowerSystemStabilizerUserDefined";
const char* PowerSystemStabilizerUserDefined::debugString()
{
	return PowerSystemStabilizerUserDefined::debugName;
}

const BaseClassDefiner PowerSystemStabilizerUserDefined::declare()
{
	return BaseClassDefiner(PowerSystemStabilizerUserDefined::addConstructToMap, PowerSystemStabilizerUserDefined::addPrimitiveAssignFnsToMap, PowerSystemStabilizerUserDefined::addClassAssignFnsToMap, PowerSystemStabilizerUserDefined::debugName);
}


