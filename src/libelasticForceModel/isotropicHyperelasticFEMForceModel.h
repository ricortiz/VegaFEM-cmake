/*************************************************************************
 *                                                                       *
 * Vega FEM Simulation Library Version 2.0                               *
 *                                                                       *
 * "forceModel" library , Copyright (C) 2007 CMU, 2009 MIT, 2013 USC     *
 * All rights reserved.                                                  *
 *                                                                       *
 * Code author: Jernej Barbic                                            *
 * http://www.jernejbarbic.com/code                                      *
 *                                                                       *
 * Research: Jernej Barbic, Fun Shing Sin, Daniel Schroeder,             *
 *           Doug L. James, Jovan Popovic                                *
 *                                                                       *
 * Funding: National Science Foundation, Link Foundation,                *
 *          Singapore-MIT GAMBIT Game Lab,                               *
 *          Zumberge Research and Innovation Fund at USC                 *
 *                                                                       *
 * This library is free software; you can redistribute it and/or         *
 * modify it under the terms of the BSD-style license that is            *
 * included with this library in the file LICENSE.txt                    *
 *                                                                       *
 * This library is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the file     *
 * LICENSE.TXT for more details.                                         *
 *                                                                       *
 *************************************************************************/

/*
  Force model for the hyperelastic isotropic nonlinear FEM material.
*/

#ifndef _ISOTROPICHYPERELASTICFEMFORCEMODEL_H_
#define _ISOTROPICHYPERELASTICFEMFORCEMODEL_H_

#include "isotropicHyperelasticFEM.h"
#include "forceModel.h"

class IsotropicHyperelasticFEMForceModel : virtual public ForceModel
{
public:
  IsotropicHyperelasticFEMForceModel(IsotropicHyperelasticFEM * isotropicHyperelasticFEM);
  virtual ~IsotropicHyperelasticFEMForceModel(); 

  virtual void GetInternalForce(double * u, double * internalForces);
  virtual void GetTangentStiffnessMatrixTopology(SparseMatrix ** tangentStiffnessMatrix);
  virtual void GetTangentStiffnessMatrix(double * u, SparseMatrix * tangentStiffnessMatrix); 

  virtual void GetForceAndMatrix(double * u, double * internalForces, SparseMatrix * tangentStiffnessMatrix);

protected:
  IsotropicHyperelasticFEM * isotropicHyperelasticFEM;
};

#endif

