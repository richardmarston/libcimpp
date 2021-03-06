///////////////////////////////////////////////////////////
//  HeatRate.h
//  Implementation of the Class HeatRate
///////////////////////////////////////////////////////////

#ifndef HEATRATE_H
#define HEATRATE_H

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Heat generated, in energy pertime unit of elapsed time.
				 */
				class HeatRate
				{

				public:
					HeatRate();
					virtual ~HeatRate();
					IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
					static const IEC61970::Base::Domain::UnitSymbol unit;
					IEC61970::Base::Domain::Float value;

				};

			}

		}

	}

}
#endif // HEATRATE_H
