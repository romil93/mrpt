/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2014, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */
#ifndef CObservationImage_H
#define CObservationImage_H

#include <mrpt/utils/CSerializable.h>
#include <mrpt/utils/CImage.h>
#include <mrpt/utils/TCamera.h>
#include <mrpt/math/CMatrix.h>
#include <mrpt/slam/CObservation.h>
#include <mrpt/poses/CPose3D.h>
#include <mrpt/poses/CPose2D.h>

namespace mrpt
{
namespace slam
{
	using namespace mrpt::utils;
	using namespace mrpt::math;

	DEFINE_SERIALIZABLE_PRE_CUSTOM_BASE_LINKAGE( CObservationImage , CObservation,OBS_IMPEXP )

	/** Declares a class derived from "CObservation" that encapsules an image from a camera, whose relative pose to robot is also stored.
	     The next figure illustrate the coordinates reference systems involved in this class:<br>
		 <center>
		 <img src="CObservationImage_figRefSystem.png">
		 </center>
	 *
	 * \sa CObservation, CObservationStereoImages
	 * \ingroup mrpt_obs_grp
	 */
	class OBS_IMPEXP CObservationImage : public CObservation
	{
		// This must be added to any CSerializable derived class:
		DEFINE_SERIALIZABLE( CObservationImage )

	 public:
		/** Constructor.
		 * \param iplImage An OpenCV "IplImage*" object with the image to be loaded in the member "image", or NULL (default) for an empty image.
		 *
		 */
		CObservationImage( void *iplImage = NULL );

		 /** The pose of the camera on the robot
		  */
		CPose3D			cameraPose;

		 /** Intrinsic and distortion parameters of the camera.
		   * See the <a href="http://www.mrpt.org/Camera_Parameters" >tutorial</a> for a discussion of these parameters.
		   */
		TCamera		cameraParams;

		CImage		image; //!< The image captured by the camera, that is, the main piece of information of this observation.

		/** Computes the rectified (un-distorted) image, using the embeded distortion parameters.
		  */
		void  getRectifiedImage( CImage &out_img ) const;

		/** A general method to retrieve the sensor pose on the robot.
		  *  Note that most sensors will return a full (6D) CPose3D, but see the derived classes for more details or special cases.
		  * \sa setSensorPose
		  */
		void getSensorPose( CPose3D &out_sensorPose ) const { out_sensorPose = cameraPose; }


		/** A general method to change the sensor pose on the robot.
		  *  Note that most sensors will use the full (6D) CPose3D, but see the derived classes for more details or special cases.
		  * \sa getSensorPose
		  */
		void setSensorPose( const CPose3D &newSensorPose ) { cameraPose = newSensorPose; }

	}; // End of class def.


	} // End of namespace
} // End of namespace

#endif
