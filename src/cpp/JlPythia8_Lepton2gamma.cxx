// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::Lepton2gamma> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::Lepton2gamma> : std::false_type { };
template<> struct SuperType<Pythia8::Lepton2gamma> { typedef Pythia8::PDF type; };
}

// Class generating the wrapper for type Pythia8::Lepton2gamma
// signature to use in the veto file: Pythia8::Lepton2gamma
struct JlPythia8_Lepton2gamma: public Wrapper {

  JlPythia8_Lepton2gamma(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::Lepton2gamma (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:867:7
    jlcxx::TypeWrapper<Pythia8::Lepton2gamma>  t = jlModule.add_type<Pythia8::Lepton2gamma>("Pythia8!Lepton2gamma",
      jlcxx::julia_base_type<Pythia8::PDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Lepton2gamma>>(new jlcxx::TypeWrapper<Pythia8::Lepton2gamma>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void Pythia8::Lepton2gamma::Lepton2gamma(int, double, double, Pythia8::PDFPtr, Pythia8::Info *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:872:3
    t.constructor<int, double, double, Pythia8::PDFPtr, Pythia8::Info *>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for void Pythia8::Lepton2gamma::xfUpdate(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Lepton2gamma::xfUpdate(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:879:8
    t.method("xfUpdate", static_cast<void (Pythia8::Lepton2gamma::*)(int, double, double) >(&Pythia8::Lepton2gamma::xfUpdate));

    DEBUG_MSG("Adding wrapper for double Pythia8::Lepton2gamma::xGamma() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Lepton2gamma::xGamma()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:880:10
    t.method("xGamma", static_cast<double (Pythia8::Lepton2gamma::*)() >(&Pythia8::Lepton2gamma::xGamma));

    DEBUG_MSG("Adding wrapper for double Pythia8::Lepton2gamma::xfMax(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Lepton2gamma::xfMax(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:881:10
    t.method("xfMax", static_cast<double (Pythia8::Lepton2gamma::*)(int, double, double) >(&Pythia8::Lepton2gamma::xfMax));

    DEBUG_MSG("Adding wrapper for double Pythia8::Lepton2gamma::xfSame(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Lepton2gamma::xfSame(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:882:10
    t.method("xfSame", static_cast<double (Pythia8::Lepton2gamma::*)(int, double, double) >(&Pythia8::Lepton2gamma::xfSame));

    DEBUG_MSG("Adding wrapper for double Pythia8::Lepton2gamma::sampleQ2gamma(double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Lepton2gamma::sampleQ2gamma(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:885:10
    t.method("sampleQ2gamma", static_cast<double (Pythia8::Lepton2gamma::*)(double) >(&Pythia8::Lepton2gamma::sampleQ2gamma));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Lepton2gamma>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_Lepton2gamma(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_Lepton2gamma(module));
}
