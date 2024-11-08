// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::SlowJet> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::SlowJet> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::SlowJet
// signature to use in the veto file: Pythia8::SlowJet
struct JlPythia8_SlowJet: public Wrapper {

  JlPythia8_SlowJet(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::SlowJet (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:422:7
    jlcxx::TypeWrapper<Pythia8::SlowJet>  t = jlModule.add_type<Pythia8::SlowJet>("Pythia8!SlowJet");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SlowJet>>(new jlcxx::TypeWrapper<Pythia8::SlowJet>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void Pythia8::SlowJet::SlowJet(int, double, double, double, int, int, Pythia8::SlowJetHook *, bool, bool) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:427:3
    t.constructor<int, double>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, double, double>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, double, double, double>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, double, double, double, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, double, double, double, int, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, double, double, double, int, int, Pythia8::SlowJetHook *>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, double, double, double, int, int, Pythia8::SlowJetHook *, bool>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, double, double, double, int, int, Pythia8::SlowJetHook *, bool, bool>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for bool Pythia8::SlowJet::analyze(const Pythia8::Event &) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::SlowJet::analyze(const Pythia8::Event &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:444:8
    t.method("analyze", static_cast<bool (Pythia8::SlowJet::*)(const Pythia8::Event &) >(&Pythia8::SlowJet::analyze));

    DEBUG_MSG("Adding wrapper for bool Pythia8::SlowJet::setup(const Pythia8::Event &) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::SlowJet::setup(const Pythia8::Event &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:451:8
    t.method("setup", static_cast<bool (Pythia8::SlowJet::*)(const Pythia8::Event &) >(&Pythia8::SlowJet::setup));

    DEBUG_MSG("Adding wrapper for bool Pythia8::SlowJet::doStep() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::SlowJet::doStep()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:454:16
    t.method("doStep", static_cast<bool (Pythia8::SlowJet::*)() >(&Pythia8::SlowJet::doStep));

    DEBUG_MSG("Adding wrapper for bool Pythia8::SlowJet::doNSteps(int) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::SlowJet::doNSteps(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:457:8
    t.method("doNSteps", static_cast<bool (Pythia8::SlowJet::*)(int) >(&Pythia8::SlowJet::doNSteps));

    DEBUG_MSG("Adding wrapper for bool Pythia8::SlowJet::stopAtN(int) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::SlowJet::stopAtN(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:462:8
    t.method("stopAtN", static_cast<bool (Pythia8::SlowJet::*)(int) >(&Pythia8::SlowJet::stopAtN));

    DEBUG_MSG("Adding wrapper for int Pythia8::SlowJet::sizeOrig() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::SlowJet::sizeOrig()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:467:10
    t.method("sizeOrig", static_cast<int (Pythia8::SlowJet::*)()  const>(&Pythia8::SlowJet::sizeOrig));

    DEBUG_MSG("Adding wrapper for int Pythia8::SlowJet::sizeJet() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::SlowJet::sizeJet()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:468:10
    t.method("sizeJet", static_cast<int (Pythia8::SlowJet::*)()  const>(&Pythia8::SlowJet::sizeJet));

    DEBUG_MSG("Adding wrapper for int Pythia8::SlowJet::sizeAll() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::SlowJet::sizeAll()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:469:10
    t.method("sizeAll", static_cast<int (Pythia8::SlowJet::*)()  const>(&Pythia8::SlowJet::sizeAll));

    DEBUG_MSG("Adding wrapper for double Pythia8::SlowJet::pT(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::SlowJet::pT(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:470:10
    t.method("pT", static_cast<double (Pythia8::SlowJet::*)(int)  const>(&Pythia8::SlowJet::pT));

    DEBUG_MSG("Adding wrapper for double Pythia8::SlowJet::y(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::SlowJet::y(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:472:10
    t.method("y", static_cast<double (Pythia8::SlowJet::*)(int)  const>(&Pythia8::SlowJet::y));

    DEBUG_MSG("Adding wrapper for double Pythia8::SlowJet::phi(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::SlowJet::phi(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:474:10
    t.method("phi", static_cast<double (Pythia8::SlowJet::*)(int)  const>(&Pythia8::SlowJet::phi));

    DEBUG_MSG("Adding wrapper for Pythia8::Vec4 Pythia8::SlowJet::p(int) (" __HERE__ ")");
    // signature to use in the veto list: Pythia8::Vec4 Pythia8::SlowJet::p(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:476:10
    t.method("p", static_cast<Pythia8::Vec4 (Pythia8::SlowJet::*)(int)  const>(&Pythia8::SlowJet::p));

    DEBUG_MSG("Adding wrapper for double Pythia8::SlowJet::m(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::SlowJet::m(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:478:10
    t.method("m", static_cast<double (Pythia8::SlowJet::*)(int)  const>(&Pythia8::SlowJet::m));

    DEBUG_MSG("Adding wrapper for int Pythia8::SlowJet::multiplicity(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::SlowJet::multiplicity(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:480:10
    t.method("multiplicity", static_cast<int (Pythia8::SlowJet::*)(int)  const>(&Pythia8::SlowJet::multiplicity));

    DEBUG_MSG("Adding wrapper for int Pythia8::SlowJet::iNext() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::SlowJet::iNext()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:484:10
    t.method("iNext", static_cast<int (Pythia8::SlowJet::*)()  const>(&Pythia8::SlowJet::iNext));

    DEBUG_MSG("Adding wrapper for int Pythia8::SlowJet::jNext() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::SlowJet::jNext()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:485:10
    t.method("jNext", static_cast<int (Pythia8::SlowJet::*)()  const>(&Pythia8::SlowJet::jNext));

    DEBUG_MSG("Adding wrapper for double Pythia8::SlowJet::dNext() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::SlowJet::dNext()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:486:10
    t.method("dNext", static_cast<double (Pythia8::SlowJet::*)()  const>(&Pythia8::SlowJet::dNext));

    DEBUG_MSG("Adding wrapper for void Pythia8::SlowJet::list(bool) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::SlowJet::list(bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:489:8
    t.method("list", static_cast<void (Pythia8::SlowJet::*)(bool)  const>(&Pythia8::SlowJet::list));
    t.method("list", [](Pythia8::SlowJet const& a)->void { a.list(); });
    t.method("list", [](Pythia8::SlowJet const* a)->void { a->list(); });

    DEBUG_MSG("Adding wrapper for std::vector<int> Pythia8::SlowJet::constituents(int) (" __HERE__ ")");
    // signature to use in the veto list: std::vector<int> Pythia8::SlowJet::constituents(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:492:15
    t.method("constituents", static_cast<std::vector<int> (Pythia8::SlowJet::*)(int) >(&Pythia8::SlowJet::constituents));

    DEBUG_MSG("Adding wrapper for std::vector<int> Pythia8::SlowJet::clusConstituents(int) (" __HERE__ ")");
    // signature to use in the veto list: std::vector<int> Pythia8::SlowJet::clusConstituents(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:499:15
    t.method("clusConstituents", static_cast<std::vector<int> (Pythia8::SlowJet::*)(int) >(&Pythia8::SlowJet::clusConstituents));

    DEBUG_MSG("Adding wrapper for int Pythia8::SlowJet::jetAssignment(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::SlowJet::jetAssignment(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:507:7
    t.method("jetAssignment", static_cast<int (Pythia8::SlowJet::*)(int) >(&Pythia8::SlowJet::jetAssignment));

    DEBUG_MSG("Adding wrapper for void Pythia8::SlowJet::removeJet(int) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::SlowJet::removeJet(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:514:8
    t.method("removeJet", static_cast<void (Pythia8::SlowJet::*)(int) >(&Pythia8::SlowJet::removeJet));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SlowJet>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_SlowJet(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_SlowJet(module));
}
