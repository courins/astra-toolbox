/*
-----------------------------------------------------------------------
Copyright: 2010-2016, iMinds-Vision Lab, University of Antwerp
           2014-2016, CWI, Amsterdam

Contact: astra@uantwerpen.be
Website: http://www.astra-toolbox.com/

This file is part of the ASTRA Toolbox.


The ASTRA Toolbox is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

The ASTRA Toolbox is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with the ASTRA Toolbox. If not, see <http://www.gnu.org/licenses/>.

-----------------------------------------------------------------------
*/

#include "astra/AstraObjectFactory.h"

using namespace std;

namespace astra {

DEFINE_SINGLETON2(CAstraObjectFactory<CAlgorithm, AlgorithmTypeList>)
DEFINE_SINGLETON2(CAstraObjectFactory<CProjector2D, Projector2DTypeList>)
DEFINE_SINGLETON2(CAstraObjectFactory<CProjector3D, Projector3DTypeList>)

} // end namespace
