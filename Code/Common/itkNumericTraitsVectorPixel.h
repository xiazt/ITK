/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    itkNumericTraitsVectorPixel.h
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) Insight Software Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef __itkNumericTraitsVectorPixel_h
#define __itkNumericTraitsVectorPixel_h


#include "itkNumericTraits.h"
#include "itkVector.h"

namespace itk
{

template < typename T, unsigned int D >
class NumericTraits<Vector< T, D > >
{
private:

  typedef  typename NumericTraits<T>::AbsType        ElementAbsType;
  typedef  typename NumericTraits<T>::AccumulateType ElementAccumulateType;
  typedef  typename NumericTraits<T>::FloatType      ElementFloatType;
  typedef  typename NumericTraits<T>::PrintType      ElementPrintType;
  typedef  typename NumericTraits<T>::RealType       ElementRealType;

public:

  typedef T                                    ValueType;
  typedef Vector<T, D>                     Self;

  typedef Vector<ElementAbsType, D>        AbsType;
  typedef Vector<ElementAccumulateType, D> AccumulateType;
  typedef Vector<ElementFloatType, D>      FloatType;
  typedef Vector<ElementPrintType, D>      PrintType;
  typedef Vector<ElementRealType, D>       RealType;

  typedef ElementRealType                      ScalarRealType;

  static const Self max()
    {
      return Self( NumericTraits< T >::max() );
    }
  static const Self min()
    {
      return Self( NumericTraits< T >::min() );
    }
  static const Self NonpositiveMin()
    {
      return Self( NumericTraits< T >::NonpositiveMin() );
    }
  static const Self ZeroValue()
    {
      return Self( NumericTraits<T>::ZeroValue() );
    }
  static const Self OneValue()
    {
      return Self( NumericTraits<T>::OneValue() );
    }
  /// \note: the functions are prefered over the member variables as
  /// they are defined for all types
  static const Self ITKCommon_EXPORT Zero;
  static const Self ITKCommon_EXPORT One;
};

} // end namespace itk

#endif // __itkNumericTraitsVectorPixel_h
