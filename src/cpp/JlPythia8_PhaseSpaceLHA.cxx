// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::PhaseSpaceLHA> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::PhaseSpaceLHA> : std::false_type { };
template<> struct SuperType<Pythia8::PhaseSpaceLHA> { typedef Pythia8::PhaseSpace type; };
}

// Class generating the wrapper for type Pythia8::PhaseSpaceLHA
// signature to use in the veto file: Pythia8::PhaseSpaceLHA
struct JlPythia8_PhaseSpaceLHA: public Wrapper {

  JlPythia8_PhaseSpaceLHA(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::PhaseSpaceLHA (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:594:7
    jlcxx::TypeWrapper<Pythia8::PhaseSpaceLHA>  t = jlModule.add_type<Pythia8::PhaseSpaceLHA>("Pythia8!PhaseSpaceLHA",
      jlcxx::julia_base_type<Pythia8::PhaseSpace>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PhaseSpaceLHA>>(new jlcxx::TypeWrapper<Pythia8::PhaseSpaceLHA>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpaceLHA::setupSampling() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpaceLHA::setupSampling()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:603:16
    t.method("setupSampling", static_cast<bool (Pythia8::PhaseSpaceLHA::*)() >(&Pythia8::PhaseSpaceLHA::setupSampling));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpaceLHA::trialKin(bool, bool) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpaceLHA::trialKin(bool, bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:606:16
    t.method("trialKin", static_cast<bool (Pythia8::PhaseSpaceLHA::*)(bool, bool) >(&Pythia8::PhaseSpaceLHA::trialKin));
    t.method("trialKin", [](Pythia8::PhaseSpaceLHA& a, bool arg0)->bool { return a.trialKin(arg0); });
    t.method("trialKin", [](Pythia8::PhaseSpaceLHA* a, bool arg0)->bool { return a->trialKin(arg0); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpaceLHA::finalKin() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpaceLHA::finalKin()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:609:16
    t.method("finalKin", static_cast<bool (Pythia8::PhaseSpaceLHA::*)() >(&Pythia8::PhaseSpaceLHA::finalKin));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpaceLHA::sigmaSumSigned() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpaceLHA::sigmaSumSigned()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:612:18
    t.method("sigmaSumSigned", static_cast<double (Pythia8::PhaseSpaceLHA::*)()  const>(&Pythia8::PhaseSpaceLHA::sigmaSumSigned));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PhaseSpaceLHA>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_PhaseSpaceLHA(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_PhaseSpaceLHA(module));
}
