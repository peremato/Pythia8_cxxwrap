// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::PhaseSpace2to3yyycyl> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::PhaseSpace2to3yyycyl> : std::false_type { };
template<> struct SuperType<Pythia8::PhaseSpace2to3yyycyl> { typedef Pythia8::PhaseSpace type; };
}

// Class generating the wrapper for type Pythia8::PhaseSpace2to3yyycyl
// signature to use in the veto file: Pythia8::PhaseSpace2to3yyycyl
struct JlPythia8_PhaseSpace2to3yyycyl: public Wrapper {

  JlPythia8_PhaseSpace2to3yyycyl(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::PhaseSpace2to3yyycyl (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:558:7
    jlcxx::TypeWrapper<Pythia8::PhaseSpace2to3yyycyl>  t = jlModule.add_type<Pythia8::PhaseSpace2to3yyycyl>("Pythia8!PhaseSpace2to3yyycyl",
      jlcxx::julia_base_type<Pythia8::PhaseSpace>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PhaseSpace2to3yyycyl>>(new jlcxx::TypeWrapper<Pythia8::PhaseSpace2to3yyycyl>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace2to3yyycyl::setupSampling() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace2to3yyycyl::setupSampling()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:569:16
    t.method("setupSampling", static_cast<bool (Pythia8::PhaseSpace2to3yyycyl::*)() >(&Pythia8::PhaseSpace2to3yyycyl::setupSampling));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace2to3yyycyl::trialKin(bool, bool) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace2to3yyycyl::trialKin(bool, bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:572:16
    t.method("trialKin", static_cast<bool (Pythia8::PhaseSpace2to3yyycyl::*)(bool, bool) >(&Pythia8::PhaseSpace2to3yyycyl::trialKin));
    t.method("trialKin", [](Pythia8::PhaseSpace2to3yyycyl& a)->bool { return a.trialKin(); });
    t.method("trialKin", [](Pythia8::PhaseSpace2to3yyycyl& a, bool arg0)->bool { return a.trialKin(arg0); });
    t.method("trialKin", [](Pythia8::PhaseSpace2to3yyycyl* a)->bool { return a->trialKin(); });
    t.method("trialKin", [](Pythia8::PhaseSpace2to3yyycyl* a, bool arg0)->bool { return a->trialKin(arg0); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace2to3yyycyl::finalKin() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace2to3yyycyl::finalKin()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:575:16
    t.method("finalKin", static_cast<bool (Pythia8::PhaseSpace2to3yyycyl::*)() >(&Pythia8::PhaseSpace2to3yyycyl::finalKin));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PhaseSpace2to3yyycyl>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_PhaseSpace2to3yyycyl(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_PhaseSpace2to3yyycyl(module));
}
