/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2014, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */

#ifndef __mrpt_vision_H
#define __mrpt_vision_H

#include <mrpt/config.h>

// Only really include all headers if we come from a user program (anything
//  not defining mrpt_*_EXPORTS) or MRPT is being built with precompiled headers.
#if !defined(mrpt_vision_EXPORTS) || MRPT_ENABLE_PRECOMPILED_HDRS || defined(MRPT_ALWAYS_INCLUDE_ALL_HEADERS)

#include <mrpt/vision/utils.h>
#include <mrpt/vision/TSimpleFeature.h>
#include <mrpt/vision/multiDesc_utils.h>
#include <mrpt/vision/chessboard_camera_calib.h>
#include <mrpt/vision/chessboard_stereo_camera_calib.h>
#include <mrpt/vision/chessboard_find_corners.h>
#include <mrpt/vision/pinhole.h>
#include <mrpt/vision/CCamModel.h>
#include <mrpt/vision/CFeatureExtraction.h>
#include <mrpt/vision/CVideoFileWriter.h>
#include <mrpt/vision/tracking.h>
#include <mrpt/vision/descriptor_kdtrees.h>
#include <mrpt/vision/descriptor_pairing.h>
#include <mrpt/vision/bundle_adjustment.h>
#include <mrpt/vision/CUndistortMap.h>
#include <mrpt/vision/CStereoRectifyMap.h>
#include <mrpt/vision/CImagePyramid.h>
#include <mrpt/vision/robust_kernels.h>
#include <mrpt/vision/CDifodo.h>

// Maps:
#include <mrpt/slam/CLandmark.h>
#include <mrpt/slam/CLandmarksMap.h>

// Obs:
#include <mrpt/slam/CObservationVisualLandmarks.h>

#endif // end precomp.headers

#endif
