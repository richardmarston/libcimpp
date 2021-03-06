///////////////////////////////////////////////////////////
//  CutAction.h
//  Implementation of the Class CutAction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CUTACTION_H
#define CUTACTION_H

#include "IEC61968/Operations/TempEquipActionKind.h"
#include "IEC61970/Base/Wires/Cut.h"
#include "IEC61968/Operations/SwitchingAction.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Action on cut as a switching step.
		 */
		class CutAction : public IEC61968::Operations::SwitchingAction
		{

		public:
			CutAction();
			virtual ~CutAction();
			/**
			 * Switching action to perform.
			 */
			IEC61968::Operations::TempEquipActionKind kind = IEC61968::Operations::TempEquipActionKind::_undef;
			/**
			 * Cut on which this action is taken.
			 */
			IEC61970::Base::Wires::Cut *Cut;

		};

	}

}
#endif // CUTACTION_H
