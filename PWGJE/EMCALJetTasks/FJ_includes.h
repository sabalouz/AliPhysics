#ifndef FJ_includes_H
#define FJ_includes_H

// $Id$

#if !defined(__CINT__) && !defined(__MAKECINT__)
#if defined __GNUC__
#pragma GCC system_header
#endif
#include <fastjet/config.h>
#include <fastjet/PseudoJet.hh>
#include <fastjet/JetDefinition.hh>
#include <fastjet/ClusterSequence.hh>
#include <fastjet/ClusterSequenceArea.hh>
#include <fastjet/AreaDefinition.hh>
#include <fastjet/SISConePlugin.hh>
#include <fastjet/CDFMidPointPlugin.hh>
#ifdef FASTJET_VERSION
//if FJ_VERSION>2
#include <fastjet/Selector.hh>
#include <fastjet/FunctionOfPseudoJet.hh>
#include <fastjet/tools/JetMedianBackgroundEstimator.hh>
#include <fastjet/tools/BackgroundEstimatorBase.hh>
#include <fastjet/tools/Subtractor.hh>
#include <fastjet/contrib/GenericSubtractor.hh>
#include <fastjet/contrib/ShapeWithComponents.hh>
#include <fastjet/contrib/ConstituentSubtractor.hh>
#endif
#endif

#endif
