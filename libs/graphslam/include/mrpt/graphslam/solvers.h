/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2014, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */
#ifndef GRAPH_SLAM_SOLVERS_H
#define GRAPH_SLAM_SOLVERS_H

#include <mrpt/graphslam/types.h>

namespace mrpt { namespace graphslam { namespace solvers {

	/** Batch GraphSLAM Levenberg-Marquartd solver: wrapper for mrpt::graphslam::GraphSlamEngine<>
	  */
	struct GS_SolverLevMarq
	{
		GS_SolverLevMarq()
		{
		}

		template <class GRAPH_T>
		void solve(GRAPH_T &graph)
		{
			MRPT_TODO("TODO")
			THROW_EXCEPTION("TODO")
		}


	};


}}} // end namespaces


#endif