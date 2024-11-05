// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::PhaseSpace2to3diffractive> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::PhaseSpace2to3diffractive> : std::false_type { };
template<> struct SuperType<Pythia8::PhaseSpace2to3diffractive> { typedef Pythia8::PhaseSpace type; };
}

// Class generating the wrapper for type Pythia8::PhaseSpace2to3diffractive
// signature to use in the veto file: Pythia8::PhaseSpace2to3diffractive
struct JlPythia8_PhaseSpace2to3diffractive: public Wrapper {

  JlPythia8_PhaseSpace2to3diffractive(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::PhaseSpace2to3diffractive (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:459:7
    jlcxx::TypeWrapper<Pythia8::PhaseSpace2to3diffractive>  t = jlModule.add_type<Pythia8::PhaseSpace2to3diffractive>("Pythia8!PhaseSpace2to3diffractive",
      jlcxx::julia_base_type<Pythia8::PhaseSpace>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PhaseSpace2to3diffractive>>(new jlcxx::TypeWrapper<Pythia8::PhaseSpace2to3diffractive>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace2to3diffractive::setupSampling() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace2to3diffractive::setupSampling()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:469:16
    t.method("setupSampling", static_cast<bool (Pythia8::PhaseSpace2to3diffractive::*)() >(&Pythia8::PhaseSpace2to3diffractive::setupSampling));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace2to3diffractive::trialKin(bool, bool) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace2to3diffractive::trialKin(bool, bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:470:16
    t.method("trialKin", static_cast<bool (Pythia8::PhaseSpace2to3diffractive::*)(bool, bool) >(&Pythia8::PhaseSpace2to3diffractive::trialKin));
    t.method("trialKin", [](Pythia8::PhaseSpace2to3diffractive& a)->bool { return a.trialKin(); });
    t.method("trialKin", [](Pythia8::PhaseSpace2to3diffractive& a, bool arg0)->bool { return a.trialKin(arg0); });
    t.method("trialKin", [](Pythia8::PhaseSpace2to3diffractive* a)->bool { return a->trialKin(); });
    t.method("trialKin", [](Pythia8::PhaseSpace2to3diffractive* a, bool arg0)->bool { return a->trialKin(arg0); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace2to3diffractive::finalKin() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace2to3diffractive::finalKin()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:471:16
    t.method("finalKin", static_cast<bool (Pythia8::PhaseSpace2to3diffractive::*)() >(&Pythia8::PhaseSpace2to3diffractive::finalKin));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace2to3diffractive::isResolved() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace2to3diffractive::isResolved()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:474:16
    t.method("isResolved", static_cast<bool (Pythia8::PhaseSpace2to3diffractive::*)()  const>(&Pythia8::PhaseSpace2to3diffractive::isResolved));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PhaseSpace2to3diffractive>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_PhaseSpace2to3diffractive(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_PhaseSpace2to3diffractive(module));
}
