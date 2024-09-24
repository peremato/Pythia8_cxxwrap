// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::TimeShower> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::TimeShower> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::TimeShower
// signature to use in the veto file: Pythia8::TimeShower
struct JlPythia8_TimeShower: public Wrapper {

  JlPythia8_TimeShower(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::TimeShower (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:33:7
    jlcxx::TypeWrapper<Pythia8::TimeShower>  t = jlModule.add_type<Pythia8::TimeShower>("Pythia8!TimeShower");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::TimeShower>>(new jlcxx::TypeWrapper<Pythia8::TimeShower>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void Pythia8::TimeShower::initPtrs(Pythia8::MergingHooksPtr, Pythia8::PartonVertexPtr, Pythia8::WeightContainer *) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::TimeShower::initPtrs(Pythia8::MergingHooksPtr, Pythia8::PartonVertexPtr, Pythia8::WeightContainer *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:45:8
    t.method("initPtrs", static_cast<void (Pythia8::TimeShower::*)(Pythia8::MergingHooksPtr, Pythia8::PartonVertexPtr, Pythia8::WeightContainer *) >(&Pythia8::TimeShower::initPtrs));

    DEBUG_MSG("Adding wrapper for void Pythia8::TimeShower::reassignBeamPtrs(Pythia8::BeamParticle *, Pythia8::BeamParticle *, int) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::TimeShower::reassignBeamPtrs(Pythia8::BeamParticle *, Pythia8::BeamParticle *, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:55:8
    t.method("reassignBeamPtrs", static_cast<void (Pythia8::TimeShower::*)(Pythia8::BeamParticle *, Pythia8::BeamParticle *, int) >(&Pythia8::TimeShower::reassignBeamPtrs));
    t.method("reassignBeamPtrs", [](Pythia8::TimeShower& a, Pythia8::BeamParticle * arg0, Pythia8::BeamParticle * arg1)->void { a.reassignBeamPtrs(arg0, arg1); });
    t.method("reassignBeamPtrs", [](Pythia8::TimeShower* a, Pythia8::BeamParticle * arg0, Pythia8::BeamParticle * arg1)->void { a->reassignBeamPtrs(arg0, arg1); });

    DEBUG_MSG("Adding wrapper for void Pythia8::TimeShower::init(Pythia8::BeamParticle *, Pythia8::BeamParticle *) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::TimeShower::init(Pythia8::BeamParticle *, Pythia8::BeamParticle *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:61:16
    t.method("init", static_cast<void (Pythia8::TimeShower::*)(Pythia8::BeamParticle *, Pythia8::BeamParticle *) >(&Pythia8::TimeShower::init));
    t.method("init", [](Pythia8::TimeShower& a)->void { a.init(); });
    t.method("init", [](Pythia8::TimeShower& a, Pythia8::BeamParticle * arg0)->void { a.init(arg0); });
    t.method("init", [](Pythia8::TimeShower* a)->void { a->init(); });
    t.method("init", [](Pythia8::TimeShower* a, Pythia8::BeamParticle * arg0)->void { a->init(arg0); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::TimeShower::limitPTmax(Pythia8::Event &, double, double) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::TimeShower::limitPTmax(Pythia8::Event &, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:65:16
    t.method("limitPTmax", static_cast<bool (Pythia8::TimeShower::*)(Pythia8::Event &, double, double) >(&Pythia8::TimeShower::limitPTmax));
    t.method("limitPTmax", [](Pythia8::TimeShower& a, Pythia8::Event & arg0)->bool { return a.limitPTmax(arg0); });
    t.method("limitPTmax", [](Pythia8::TimeShower& a, Pythia8::Event & arg0, double arg1)->bool { return a.limitPTmax(arg0, arg1); });
    t.method("limitPTmax", [](Pythia8::TimeShower* a, Pythia8::Event & arg0)->bool { return a->limitPTmax(arg0); });
    t.method("limitPTmax", [](Pythia8::TimeShower* a, Pythia8::Event & arg0, double arg1)->bool { return a->limitPTmax(arg0, arg1); });

    DEBUG_MSG("Adding wrapper for int Pythia8::TimeShower::shower(int, int, Pythia8::Event &, double, int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::TimeShower::shower(int, int, Pythia8::Event &, double, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:69:15
    t.method("shower", static_cast<int (Pythia8::TimeShower::*)(int, int, Pythia8::Event &, double, int) >(&Pythia8::TimeShower::shower));
    t.method("shower", [](Pythia8::TimeShower& a, int arg0, int arg1, Pythia8::Event & arg2, double arg3)->int { return a.shower(arg0, arg1, arg2, arg3); });
    t.method("shower", [](Pythia8::TimeShower* a, int arg0, int arg1, Pythia8::Event & arg2, double arg3)->int { return a->shower(arg0, arg1, arg2, arg3); });

    DEBUG_MSG("Adding wrapper for int Pythia8::TimeShower::showerQED(int, int, Pythia8::Event &, double) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::TimeShower::showerQED(int, int, Pythia8::Event &, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:73:15
    t.method("showerQED", static_cast<int (Pythia8::TimeShower::*)(int, int, Pythia8::Event &, double) >(&Pythia8::TimeShower::showerQED));

    DEBUG_MSG("Adding wrapper for int Pythia8::TimeShower::showerQEDafterRemnants(Pythia8::Event &) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::TimeShower::showerQEDafterRemnants(Pythia8::Event &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:77:15
    t.method("showerQEDafterRemnants", static_cast<int (Pythia8::TimeShower::*)(Pythia8::Event &) >(&Pythia8::TimeShower::showerQEDafterRemnants));

    DEBUG_MSG("Adding wrapper for void Pythia8::TimeShower::prepareProcess(Pythia8::Event &, Pythia8::Event &, std::vector<int> &) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::TimeShower::prepareProcess(Pythia8::Event &, Pythia8::Event &, std::vector<int> &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:82:16
    t.method("prepareProcess", static_cast<void (Pythia8::TimeShower::*)(Pythia8::Event &, Pythia8::Event &, std::vector<int> &) >(&Pythia8::TimeShower::prepareProcess));

    DEBUG_MSG("Adding wrapper for void Pythia8::TimeShower::prepareGlobal(Pythia8::Event &) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::TimeShower::prepareGlobal(Pythia8::Event &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:86:16
    t.method("prepareGlobal", static_cast<void (Pythia8::TimeShower::*)(Pythia8::Event &) >(&Pythia8::TimeShower::prepareGlobal));

    DEBUG_MSG("Adding wrapper for void Pythia8::TimeShower::prepare(int, Pythia8::Event &, bool) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::TimeShower::prepare(int, Pythia8::Event &, bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:90:16
    t.method("prepare", static_cast<void (Pythia8::TimeShower::*)(int, Pythia8::Event &, bool) >(&Pythia8::TimeShower::prepare));
    t.method("prepare", [](Pythia8::TimeShower& a, int arg0, Pythia8::Event & arg1)->void { a.prepare(arg0, arg1); });
    t.method("prepare", [](Pythia8::TimeShower* a, int arg0, Pythia8::Event & arg1)->void { a->prepare(arg0, arg1); });

    DEBUG_MSG("Adding wrapper for void Pythia8::TimeShower::rescatterUpdate(int, Pythia8::Event &) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::TimeShower::rescatterUpdate(int, Pythia8::Event &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:94:16
    t.method("rescatterUpdate", static_cast<void (Pythia8::TimeShower::*)(int, Pythia8::Event &) >(&Pythia8::TimeShower::rescatterUpdate));

    DEBUG_MSG("Adding wrapper for void Pythia8::TimeShower::update(int, Pythia8::Event &, bool) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::TimeShower::update(int, Pythia8::Event &, bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:98:16
    t.method("update", static_cast<void (Pythia8::TimeShower::*)(int, Pythia8::Event &, bool) >(&Pythia8::TimeShower::update));
    t.method("update", [](Pythia8::TimeShower& a, int arg0, Pythia8::Event & arg1)->void { a.update(arg0, arg1); });
    t.method("update", [](Pythia8::TimeShower* a, int arg0, Pythia8::Event & arg1)->void { a->update(arg0, arg1); });

    DEBUG_MSG("Adding wrapper for double Pythia8::TimeShower::pTnext(Pythia8::Event &, double, double, bool, bool) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::TimeShower::pTnext(Pythia8::Event &, double, double, bool, bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:102:18
    t.method("pTnext", static_cast<double (Pythia8::TimeShower::*)(Pythia8::Event &, double, double, bool, bool) >(&Pythia8::TimeShower::pTnext));
    t.method("pTnext", [](Pythia8::TimeShower& a, Pythia8::Event & arg0, double arg1, double arg2)->double { return a.pTnext(arg0, arg1, arg2); });
    t.method("pTnext", [](Pythia8::TimeShower& a, Pythia8::Event & arg0, double arg1, double arg2, bool arg3)->double { return a.pTnext(arg0, arg1, arg2, arg3); });
    t.method("pTnext", [](Pythia8::TimeShower* a, Pythia8::Event & arg0, double arg1, double arg2)->double { return a->pTnext(arg0, arg1, arg2); });
    t.method("pTnext", [](Pythia8::TimeShower* a, Pythia8::Event & arg0, double arg1, double arg2, bool arg3)->double { return a->pTnext(arg0, arg1, arg2, arg3); });

    DEBUG_MSG("Adding wrapper for double Pythia8::TimeShower::pTnextResDec() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::TimeShower::pTnextResDec()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:106:18
    t.method("pTnextResDec", static_cast<double (Pythia8::TimeShower::*)() >(&Pythia8::TimeShower::pTnextResDec));

    DEBUG_MSG("Adding wrapper for bool Pythia8::TimeShower::branch(Pythia8::Event &, bool) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::TimeShower::branch(Pythia8::Event &, bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:110:16
    t.method("branch", static_cast<bool (Pythia8::TimeShower::*)(Pythia8::Event &, bool) >(&Pythia8::TimeShower::branch));
    t.method("branch", [](Pythia8::TimeShower& a, Pythia8::Event & arg0)->bool { return a.branch(arg0); });
    t.method("branch", [](Pythia8::TimeShower* a, Pythia8::Event & arg0)->bool { return a->branch(arg0); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::TimeShower::resonanceShower(Pythia8::Event &, Pythia8::Event &, std::vector<int> &, double) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::TimeShower::resonanceShower(Pythia8::Event &, Pythia8::Event &, std::vector<int> &, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:119:16
    t.method("resonanceShower", static_cast<bool (Pythia8::TimeShower::*)(Pythia8::Event &, Pythia8::Event &, std::vector<int> &, double) >(&Pythia8::TimeShower::resonanceShower));
    t.method("resonanceShower", [](Pythia8::TimeShower& a, Pythia8::Event & arg0, Pythia8::Event & arg1, std::vector<int> & arg2)->bool { return a.resonanceShower(arg0, arg1, arg2); });
    t.method("resonanceShower", [](Pythia8::TimeShower* a, Pythia8::Event & arg0, Pythia8::Event & arg1, std::vector<int> & arg2)->bool { return a->resonanceShower(arg0, arg1, arg2); });

    DEBUG_MSG("Adding wrapper for void Pythia8::TimeShower::list() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::TimeShower::list()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:123:16
    t.method("list", static_cast<void (Pythia8::TimeShower::*)()  const>(&Pythia8::TimeShower::list));

    DEBUG_MSG("Adding wrapper for bool Pythia8::TimeShower::initUncertainties() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::TimeShower::initUncertainties()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:126:16
    t.method("initUncertainties", static_cast<bool (Pythia8::TimeShower::*)() >(&Pythia8::TimeShower::initUncertainties));

    DEBUG_MSG("Adding wrapper for bool Pythia8::TimeShower::initEnhancements() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::TimeShower::initEnhancements()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:129:16
    t.method("initEnhancements", static_cast<bool (Pythia8::TimeShower::*)() >(&Pythia8::TimeShower::initEnhancements));

    DEBUG_MSG("Adding wrapper for bool Pythia8::TimeShower::getHasWeaklyRadiated() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::TimeShower::getHasWeaklyRadiated()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:132:16
    t.method("getHasWeaklyRadiated", static_cast<bool (Pythia8::TimeShower::*)() >(&Pythia8::TimeShower::getHasWeaklyRadiated));

    DEBUG_MSG("Adding wrapper for int Pythia8::TimeShower::system() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::TimeShower::system()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:135:15
    t.method("system", static_cast<int (Pythia8::TimeShower::*)()  const>(&Pythia8::TimeShower::system));

    DEBUG_MSG("Adding wrapper for double Pythia8::TimeShower::enhancePTmax() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::TimeShower::enhancePTmax()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:138:18
    t.method("enhancePTmax", static_cast<double (Pythia8::TimeShower::*)() >(&Pythia8::TimeShower::enhancePTmax));

    DEBUG_MSG("Adding wrapper for double Pythia8::TimeShower::pTLastInShower() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::TimeShower::pTLastInShower()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:141:18
    t.method("pTLastInShower", static_cast<double (Pythia8::TimeShower::*)() >(&Pythia8::TimeShower::pTLastInShower));

    DEBUG_MSG("Adding wrapper for Pythia8::Event Pythia8::TimeShower::clustered(const Pythia8::Event &, int, int, int, std::string) (" __HERE__ ")");
    // signature to use in the veto list: Pythia8::Event Pythia8::TimeShower::clustered(const Pythia8::Event &, int, int, int, std::string)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:152:17
    t.method("clustered", static_cast<Pythia8::Event (Pythia8::TimeShower::*)(const Pythia8::Event &, int, int, int, std::string) >(&Pythia8::TimeShower::clustered));

    DEBUG_MSG("Adding wrapper for bool Pythia8::TimeShower::isTimelike(const Pythia8::Event &, int, int, int, std::string) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::TimeShower::isTimelike(const Pythia8::Event &, int, int, int, std::string)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:168:16
    t.method("isTimelike", static_cast<bool (Pythia8::TimeShower::*)(const Pythia8::Event &, int, int, int, std::string) >(&Pythia8::TimeShower::isTimelike));

    DEBUG_MSG("Adding wrapper for std::vector<std::string> Pythia8::TimeShower::getSplittingName(const Pythia8::Event &, int, int, int) (" __HERE__ ")");
    // signature to use in the veto list: std::vector<std::string> Pythia8::TimeShower::getSplittingName(const Pythia8::Event &, int, int, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:173:26
    t.method("getSplittingName", static_cast<std::vector<std::string> (Pythia8::TimeShower::*)(const Pythia8::Event &, int, int, int) >(&Pythia8::TimeShower::getSplittingName));

    DEBUG_MSG("Adding wrapper for double Pythia8::TimeShower::getSplittingProb(const Pythia8::Event &, int, int, int, std::string) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::TimeShower::getSplittingProb(const Pythia8::Event &, int, int, int, std::string)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:178:18
    t.method("getSplittingProb", static_cast<double (Pythia8::TimeShower::*)(const Pythia8::Event &, int, int, int, std::string) >(&Pythia8::TimeShower::getSplittingProb));

    DEBUG_MSG("Adding wrapper for bool Pythia8::TimeShower::allowedSplitting(const Pythia8::Event &, int, int) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::TimeShower::allowedSplitting(const Pythia8::Event &, int, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:180:16
    t.method("allowedSplitting", static_cast<bool (Pythia8::TimeShower::*)(const Pythia8::Event &, int, int) >(&Pythia8::TimeShower::allowedSplitting));

    DEBUG_MSG("Adding wrapper for std::vector<int> Pythia8::TimeShower::getRecoilers(const Pythia8::Event &, int, int, std::string) (" __HERE__ ")");
    // signature to use in the veto list: std::vector<int> Pythia8::TimeShower::getRecoilers(const Pythia8::Event &, int, int, std::string)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:182:23
    t.method("getRecoilers", static_cast<std::vector<int> (Pythia8::TimeShower::*)(const Pythia8::Event &, int, int, std::string) >(&Pythia8::TimeShower::getRecoilers));

    DEBUG_MSG("Adding wrapper for double Pythia8::TimeShower::enhanceFactor(const std::string &) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::TimeShower::enhanceFactor(const std::string &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:185:18
    t.method("enhanceFactor", static_cast<double (Pythia8::TimeShower::*)(const std::string &) >(&Pythia8::TimeShower::enhanceFactor));

    DEBUG_MSG("Adding wrapper for double Pythia8::TimeShower::noEmissionProbability(double, double, double, int, int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::TimeShower::noEmissionProbability(double, double, double, int, int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:194:18
    t.method("noEmissionProbability", static_cast<double (Pythia8::TimeShower::*)(double, double, double, int, int, double, double) >(&Pythia8::TimeShower::noEmissionProbability));

    DEBUG_MSG("Adding mergingHooksPtr methods  to provide read access to the field mergingHooksPtr (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:198:20
    // signature to use in the veto list: Pythia8::TimeShower::mergingHooksPtr
    t.method("mergingHooksPtr", [](const Pythia8::TimeShower& a) -> const Pythia8::MergingHooksPtr& { return a.mergingHooksPtr; });
    t.method("mergingHooksPtr", [](Pythia8::TimeShower& a) -> Pythia8::MergingHooksPtr& { return a.mergingHooksPtr; });
    t.method("mergingHooksPtr", [](const Pythia8::TimeShower* a) -> const Pythia8::MergingHooksPtr& { return a->mergingHooksPtr; });
    t.method("mergingHooksPtr", [](Pythia8::TimeShower* a) -> Pythia8::MergingHooksPtr& { return a->mergingHooksPtr; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:198:20
    // signature to use in the veto list: Pythia8::TimeShower::mergingHooksPtr
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding mergingHooksPtr! methods to provide write access to the field mergingHooksPtr (" __HERE__ ")");
    t.method("mergingHooksPtr!", [](Pythia8::TimeShower& a, const Pythia8::MergingHooksPtr& val) -> Pythia8::MergingHooksPtr& { return a.mergingHooksPtr = val; });

    DEBUG_MSG("Adding mergingHooksPtr! methods to provide write access to the field mergingHooksPtr (" __HERE__ ")");
    t.method("mergingHooksPtr!", [](Pythia8::TimeShower* a, const Pythia8::MergingHooksPtr& val) -> Pythia8::MergingHooksPtr& { return a->mergingHooksPtr = val; });

    DEBUG_MSG("Adding weightContainerPtr methods  to provide read access to the field weightContainerPtr (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:200:20
    // signature to use in the veto list: Pythia8::TimeShower::weightContainerPtr
    t.method("weightContainerPtr", [](const Pythia8::TimeShower& a) -> Pythia8::WeightContainer * { return a.weightContainerPtr; });
    t.method("weightContainerPtr", [](Pythia8::TimeShower& a) -> Pythia8::WeightContainer * { return a.weightContainerPtr; });
    t.method("weightContainerPtr", [](const Pythia8::TimeShower* a) -> Pythia8::WeightContainer * { return a->weightContainerPtr; });
    t.method("weightContainerPtr", [](Pythia8::TimeShower* a) -> Pythia8::WeightContainer * { return a->weightContainerPtr; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/TimeShower.h:200:20
    // signature to use in the veto list: Pythia8::TimeShower::weightContainerPtr
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding weightContainerPtr! methods to provide write access to the field weightContainerPtr (" __HERE__ ")");
    t.method("weightContainerPtr!", [](Pythia8::TimeShower& a, Pythia8::WeightContainer * val) -> Pythia8::WeightContainer * { return a.weightContainerPtr = val; });

    DEBUG_MSG("Adding weightContainerPtr! methods to provide write access to the field weightContainerPtr (" __HERE__ ")");
    t.method("weightContainerPtr!", [](Pythia8::TimeShower* a, Pythia8::WeightContainer * val) -> Pythia8::WeightContainer * { return a->weightContainerPtr = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::TimeShower>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_TimeShower(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_TimeShower(module));
}
