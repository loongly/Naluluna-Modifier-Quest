// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1
#include "UnityEngine/ProBuilder/Poly2Tri/FixedArray3_1.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
#include "UnityEngine/ProBuilder/Poly2Tri/FixedBitArray3.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
  class DelaunayTriangle : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> Points
    // Offset: 0x10
    UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> Points;
    // public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> Neighbors
    // Offset: 0x28
    UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> Neighbors;
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 EdgeIsConstrained
    // Offset: 0x40
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsConstrained;
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 EdgeIsDelaunay
    // Offset: 0x43
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsDelaunay;
    // private System.Boolean <IsInterior>k__BackingField
    // Offset: 0x46
    bool IsInterior;
    // public System.Boolean get_IsInterior()
    // Offset: 0x1917450
    bool get_IsInterior();
    // public System.Void set_IsInterior(System.Boolean value)
    // Offset: 0x1917458
    void set_IsInterior(bool value);
    // public System.Void .ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p3)
    // Offset: 0x19142E4
    static DelaunayTriangle* New_ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3);
    // public System.Int32 IndexOf(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19165B4
    int IndexOf(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Int32 IndexCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x1917464
    int IndexCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean Contains(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19132D8
    bool Contains(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // private System.Void MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x191749C
    void MarkNeighbor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x1914390
    void MarkNeighbor(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint OppositePoint(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19133B4
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* OppositePoint(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x1913BB4
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x1913A88
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborAcrossFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x1913338
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborAcrossFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint PointCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x19139F8
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint PointCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x1913B24
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // private System.Void RotateCW()
    // Offset: 0x1917564
    void RotateCW();
    // public System.Void Legalize(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint oPoint, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint nPoint)
    // Offset: 0x19167FC
    void Legalize(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* oPoint, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* nPoint);
    // public System.Void MarkConstrainedEdge(System.Int32 index)
    // Offset: 0x19155AC
    void MarkConstrainedEdge(int index);
    // public System.Void MarkConstrainedEdge(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint q)
    // Offset: 0x19155B8
    void MarkConstrainedEdge(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* q);
    // public System.Int32 EdgeIndex(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2)
    // Offset: 0x19154BC
    int EdgeIndex(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);
    // public System.Boolean GetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x1916724
    bool GetConstrainedEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean GetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x1913FD0
    bool GetConstrainedEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Void SetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x191693C
    void SetConstrainedEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Void SetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x191698C
    void SetConstrainedEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Boolean GetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x191676C
    bool GetDelaunayEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean GetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19167B4
    bool GetDelaunayEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Void SetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x191689C
    void SetDelaunayEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Void SetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x19168EC
    void SetDelaunayEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public override System.String ToString()
    // Offset: 0x191762C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, "UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle");
#pragma pack(pop)