/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    wrap_itkContinuousIndex.cxx
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) 2002 Insight Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#include "itkContinuousIndex.h"
#include "itkImage.h"

#ifdef CABLE_CONFIGURATION
#include "itkCSwigImages.h"
#include "itkCSwigMacros.h"

namespace _cable_
{
  const char* const group = ITK_WRAP_GROUP(itkContinuousIndex);
  namespace wrappers
  {
    typedef itk::ContinuousIndex<double, 2> itkContinuousIndexD2;
    typedef itk::ContinuousIndex<double, 3> itkContinuousIndexD3;
  }
}
#endif
