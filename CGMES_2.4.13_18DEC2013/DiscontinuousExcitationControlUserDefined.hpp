#ifndef DiscontinuousExcitationControlUserDefined_H
#define DiscontinuousExcitationControlUserDefined_H

#include "DiscontinuousExcitationControlDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"

namespace CIMPP {


class ProprietaryParameterDynamics;
	/*
	Discontinuous excitation control function block whose dynamic behaviour is described by
	*/
	class DiscontinuousExcitationControlUserDefined: public DiscontinuousExcitationControlDynamics
	{

	public:
					CIMPP::Boolean proprietary; 	/* Behaviour is based on proprietary model as opposed to detailed model. true = user-defined model is proprietary with behaviour mutually understood by sending and receiving applications and parameters passed as general attributes false = user-defined model is explicitly defined in terms of control blocks and their input and output signals. Default: false */
					std::list<CIMPP::ProprietaryParameterDynamics*> ProprietaryParameterDynamics; 	/* Parameter of this proprietary user-defined model. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DiscontinuousExcitationControlUserDefined();
		virtual ~DiscontinuousExcitationControlUserDefined();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DiscontinuousExcitationControlUserDefined_factory();
}
#endif
