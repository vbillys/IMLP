// ****************************************************************************
//
//    Copyright (c) 2014, Seth Billings, Russell Taylor, Johns Hopkins University
//    All rights reserved.
//
//    Redistribution and use in source and binary forms, with or without
//    modification, are permitted provided that the following conditions are
//    met:
//
//    1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//
//    2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
//    3. Neither the name of the copyright holder nor the names of its
//    contributors may be used to endorse or promote products derived from
//    this software without specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
//    A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
//    HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
//    SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
//    LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
//    DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
//    THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
//    OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//  
// ****************************************************************************
#ifndef _cisstAlgorithmICP_StdICP_Mesh_h
#define _cisstAlgorithmICP_StdICP_Mesh_h

#include "cisstAlgorithmICP_StdICP.h"
#include "cisstCovTree_Mesh.h"
#include "cisstAlgorithmCovTree_CP_Mesh.h"


class cisstAlgorithmICP_StdICP_Mesh : public cisstAlgorithmICP_StdICP, public cisstAlgorithmCovTree_CP_Mesh
{ 
  //
  // This class implements the standard ICP algorithm for 
  //  a mesh target shape.
  //

  //--- Algorithm Parameters ---//


  //--- Algorithm Methods ---//

public:

  // constructor
  cisstAlgorithmICP_StdICP_Mesh(cisstCovTree_Mesh *pTree, vctDynamicVector<vct3> &samplePts)
    : cisstAlgorithmICP_StdICP(pTree, samplePts),
    cisstAlgorithmCovTree_CP_Mesh(pTree)
  {}
 
  // destructor
  ~cisstAlgorithmICP_StdICP_Mesh() {}

};

#endif
