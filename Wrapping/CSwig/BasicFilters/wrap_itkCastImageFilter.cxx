/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    wrap_itkCastImageFilter.cxx
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) 2002 Insight Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#include "itkCastImageFilter.h"
#include "itkImage.h"

#ifdef CABLE_CONFIGURATION
#include "itkCSwigMacros.h"
#include "itkCSwigImages.h"

namespace _cable_
{
  const char* const group = ITK_WRAP_GROUP(itkCastImageFilter);
  namespace wrappers
  {
    ITK_WRAP_OBJECT2_WITH_SUPERCLASS(CastImageFilter, image::F2, image::US2, 
                                     CastImageFilterF2US2);
    ITK_WRAP_OBJECT2_WITH_SUPERCLASS(CastImageFilter, image::US2, image::F2, 
                                     CastImageFilterUS2F2);
    ITK_WRAP_OBJECT2_WITH_SUPERCLASS(CastImageFilter, image::F2, image::F2, 
                                     CastImageFilterF2F2);
    ITK_WRAP_OBJECT2_WITH_SUPERCLASS(CastImageFilter, image::US2, image::US2, 
                                     CastImageFilterUS2US2);
    ITK_WRAP_OBJECT2_WITH_SUPERCLASS(CastImageFilter, image::F3, image::US3, 
                                     CastImageFilterF3US3);
    ITK_WRAP_OBJECT2_WITH_SUPERCLASS(CastImageFilter, image::F3, image::F3, 
                                     CastImageFilterF3F3);
    ITK_WRAP_OBJECT2_WITH_SUPERCLASS(CastImageFilter, image::US3, image::US3, 
                                     CastImageFilterUS3US3);
  }
}
#endif
