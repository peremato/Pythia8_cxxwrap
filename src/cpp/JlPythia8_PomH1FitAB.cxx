// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::PomH1FitAB> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::PomH1FitAB> : std::false_type { };
template<> struct SuperType<Pythia8::PomH1FitAB> { typedef Pythia8::PDF type; };
}

// Class generating the wrapper for type Pythia8::PomH1FitAB
// signature to use in the veto file: Pythia8::PomH1FitAB
struct JlPythia8_PomH1FitAB: public Wrapper {

  JlPythia8_PomH1FitAB(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::PomH1FitAB (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:586:7
    jlcxx::TypeWrapper<Pythia8::PomH1FitAB>  t = jlModule.add_type<Pythia8::PomH1FitAB>("Pythia8!PomH1FitAB",
      jlcxx::julia_base_type<Pythia8::PDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PomH1FitAB>>(new jlcxx::TypeWrapper<Pythia8::PomH1FitAB>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void Pythia8::PomH1FitAB::PomH1FitAB(int, int, double, std::string, Pythia8::Logger *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:591:2
    t.constructor<int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, int, double>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, int, double, std::string>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, int, double, std::string, Pythia8::Logger *>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for void Pythia8::PomH1FitAB::setExtrapolate(bool) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PomH1FitAB::setExtrapolate(bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:604:8
    t.method("setExtrapolate", static_cast<void (Pythia8::PomH1FitAB::*)(bool) >(&Pythia8::PomH1FitAB::setExtrapolate));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PomH1FitAB>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_PomH1FitAB(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_PomH1FitAB(module));
}
