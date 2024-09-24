// this file was auto-generated by wrapit 
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::PhaseSpace2to2tauyz> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::PhaseSpace2to2tauyz> : std::false_type { };
template<> struct SuperType<Pythia8::PhaseSpace2to2tauyz> { typedef Pythia8::PhaseSpace type; };
}

// Class generating the wrapper for type Pythia8::PhaseSpace2to2tauyz
// signature to use in the veto file: Pythia8::PhaseSpace2to2tauyz
struct JlPythia8_PhaseSpace2to2tauyz: public Wrapper {

  JlPythia8_PhaseSpace2to2tauyz(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::PhaseSpace2to2tauyz (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:328:7
    jlcxx::TypeWrapper<Pythia8::PhaseSpace2to2tauyz>  t = jlModule.add_type<Pythia8::PhaseSpace2to2tauyz>("Pythia8!PhaseSpace2to2tauyz",
      jlcxx::julia_base_type<Pythia8::PhaseSpace>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PhaseSpace2to2tauyz>>(new jlcxx::TypeWrapper<Pythia8::PhaseSpace2to2tauyz>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace2to2tauyz::setupSampling() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace2to2tauyz::setupSampling()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:336:16
    t.method("setupSampling", static_cast<bool (Pythia8::PhaseSpace2to2tauyz::*)() >(&Pythia8::PhaseSpace2to2tauyz::setupSampling));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace2to2tauyz::trialKin(bool, bool) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace2to2tauyz::trialKin(bool, bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:340:16
    t.method("trialKin", static_cast<bool (Pythia8::PhaseSpace2to2tauyz::*)(bool, bool) >(&Pythia8::PhaseSpace2to2tauyz::trialKin));
    t.method("trialKin", [](Pythia8::PhaseSpace2to2tauyz& a)->bool { return a.trialKin(); });
    t.method("trialKin", [](Pythia8::PhaseSpace2to2tauyz& a, bool arg0)->bool { return a.trialKin(arg0); });
    t.method("trialKin", [](Pythia8::PhaseSpace2to2tauyz* a)->bool { return a->trialKin(); });
    t.method("trialKin", [](Pythia8::PhaseSpace2to2tauyz* a, bool arg0)->bool { return a->trialKin(arg0); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::PhaseSpace2to2tauyz::finalKin() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PhaseSpace2to2tauyz::finalKin()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:345:16
    t.method("finalKin", static_cast<bool (Pythia8::PhaseSpace2to2tauyz::*)() >(&Pythia8::PhaseSpace2to2tauyz::finalKin));

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace2to2tauyz::rescaleMomenta(double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace2to2tauyz::rescaleMomenta(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:349:16
    t.method("rescaleMomenta", static_cast<void (Pythia8::PhaseSpace2to2tauyz::*)(double) >(&Pythia8::PhaseSpace2to2tauyz::rescaleMomenta));

    DEBUG_MSG("Adding wrapper for void Pythia8::PhaseSpace2to2tauyz::rescaleSigma(double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PhaseSpace2to2tauyz::rescaleSigma(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:352:16
    t.method("rescaleSigma", static_cast<void (Pythia8::PhaseSpace2to2tauyz::*)(double) >(&Pythia8::PhaseSpace2to2tauyz::rescaleSigma));

    DEBUG_MSG("Adding wrapper for double Pythia8::PhaseSpace2to2tauyz::weightGammaPDFApprox() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PhaseSpace2to2tauyz::weightGammaPDFApprox()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:355:18
    t.method("weightGammaPDFApprox", static_cast<double (Pythia8::PhaseSpace2to2tauyz::*)() >(&Pythia8::PhaseSpace2to2tauyz::weightGammaPDFApprox));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PhaseSpace2to2tauyz>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_PhaseSpace2to2tauyz(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_PhaseSpace2to2tauyz(module));
}
